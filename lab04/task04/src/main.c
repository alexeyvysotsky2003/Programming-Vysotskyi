int main() {
	double x = 5; // число х
	double y; // число у
	if (x < -1){
		y = -1 / x; // обчислення числа у, якщо х < -1
		}
	else	
	if (x >= -1 && x <= 1){ 
		y = x * x; // обчислення числа у, якщо -1 <= x <= 1
		}
	else
	if (x > 1){  
		y = 1; // y = 1, якщо х > 1
		}
	return 0;
}
