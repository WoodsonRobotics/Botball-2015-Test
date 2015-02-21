void linefollow() {
	int light;
	while (1) {
		light = analog10(5);
		if (light > 700) { //assume black line
			motor(0,250);
			msleep(1000);
			motor(0,500);
			motor(2,250);
		}
	}
}
int main () {
	motor(0,500);
	motor(2,500);
	linefollow();
	
	return 0;
}
