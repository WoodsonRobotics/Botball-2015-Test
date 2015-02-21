void linefollow() {
	int light;
	while (1) {
		light = analog10(5);
		if (light > 700) { //assume black line
			motor(0,2500);
			msleep(1000);
			motor(0,5000);
			motor(2,2500);
		}
	}
}
int main () {
	motor(0,5000);
	motor(2,5000);
	linefollow();
	
	return 0;
}
