int main() {
	double x = 5; // число х
	double y; // число у
	if (x < -1){
		y = -x - 1; // обчислення числа у, якщо х < -1
		}
	else
	if (x >= -1 && x < 0){
		y = x + 1; // обчислення числа у, якщо -1 <= x < 0
		}
	else
	if (x >= 0 && x < 1){
		y = 1 - x; // обчислення числа у, якщо 0 <= x < 1
		}
	else
	if (x >= 1){
		y = x - 1; // обчислення числа у, якщо х >= 1
		}
	return 0;
}
