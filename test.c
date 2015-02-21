//follow a black line
void linefollow() {
	int light;
	while (1) {
		light = analog(5);
		if (light > 700) { //assume black line
			mav(0,100);
			msleep(500);
			mav(0,500);
			mav(2,100);
		}
	}
}
int main () {
	mav(0,500);
	mav(2,500);
	linefollow();
	
	return 0;
}
