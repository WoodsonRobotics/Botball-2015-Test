#define leftWheel 0
#define rightWheel 2

#define lightPort 5

void turn_L() {
	motor(leftWheel,-70);
	motor(rightWheel,-45);  	
}
void turn_R() {
	motor(leftWheel,-45);
	motor(rightWheel,-70);
}
int isOnLine() {
	if (analog10(lightPort) > 700) { // > 700 is ON THE LINE
		return 1;
	}
	return 0;
}

void move(int speed, float seconds) {
		
	mav(leftWheel, -1*speed);
	mav(rightWheel, speed);
	msleep(seconds * 1000);
	mav(leftWheel, 0);
	mav(rightWheel, 0);

}

int linefollow() {
	printf("testing line following");
	while(1) {
		if (isOnLine() == 1) {
			mav(rightWheel, -500);
			mav(leftWheel, 500);
		} else {
				turn_R();
				turn_L();
		  }
		
	}
	return 0;
	
}

int main () {
	move(100,1);
	linefollow();
}
