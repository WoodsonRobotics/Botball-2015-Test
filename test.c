void linefollow() {
	int light;
	int oldlight;
	while (1) {
		int light = analog10(5);
		if (light > 700) { //assume black line
			motor(0,250);
			msleep(1000);
			motor(0,1000);
			motor(2,250);
			light = analog10(5);
			while (!(light > 700)) {
				light = analog10(5);
			}
		}
		oldlight = light;
	}
}
int main () {
	motor(0,1000);
	motor(2,1000);
	linefollow();
	
	return 0;
}
