#define leftWheel 0
#define rightWheel 2

#define lightPort 5

void turn_L() {
	mav(leftWheel,500);
	motor(rightWheel,250);  	
}
void turn_R() {
	mav(leftWheel,250);
	mav(rightWheel,500);
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

void linefollow() {
	printf("testing line following");
	while(1) {
		if (isOnLine() == 1) {
			mav(rightWheel, 100);
			mav(leftWheel, 500);
		} else {
				turn_R();
				turn_L();
		  }
		
	}
}
