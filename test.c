//follow a black line
void linefollow() {
	int light;
	while (1) {
		light = analog(5);
		if (light > 700) { //black line
			mav(2,500); //works better with this but inefficient 
			mav(0,100);
			msleep(1500);
			mav(0,500);
			mav(2,100);
		}
	}
}

int main () {
	mav(0,500);
	mav(2,500);
	msleep(1000);
	linefollow();
	
	return 0;
}
