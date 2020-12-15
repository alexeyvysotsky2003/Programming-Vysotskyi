#define N 627195
int main() {
	int result_for = 0;
	int result_while = 0;
	int result_do = 0;
	int half1_for = 0;
	int half2_for = 0;
	int half1_while = 0;
	int half2_while = 0;
	int half1_do = 0;
	int half2_do = 0;
	int i;
	int j;
	
	for (i = 1000; (N / i) > 0; i *= 10) {
		half1_for += N / i % 10;
		}
	for (j = 1; (N % 1000 / j) > 0; j *= 10) {
		half2_for += N % 1000 / j % 10;
		}
		
	if (half1_for == half2_for) { // порівняння двох отриманих чисел
 		result_for = 1; // якщо квиток “щасливий”
	} else {
		result_for = 0; // якщо квиток не “щасливий”
	}
	
	i = 1000;
	j = 1;
	while ((N / i) > 0 && N % 1000 / j > 0) {
		half1_while += N / i % 10;
		half2_while += N % 1000 / j % 10;
		i *= 10;
		j *= 10;
		}
		
	if (half1_while == half2_while) { // порівняння двох отриманих чисел
 		result_while = 1; // якщо квиток “щасливий”
	} else {
		result_while = 0; // якщо квиток не “щасливий”
	}
	
	i = 1000;
	j = 1;
	do {
		half1_do += N / i % 10;
		half2_do += N % 1000 / j % 10;
		i *= 10;
		j *= 10;
	} while ((N / i) > 0 && N % 1000 / j > 0);
	
	if (half1_do == half2_do) { // порівняння двох отриманих чисел
 		result_do = 1; // якщо квиток “щасливий”
	} else {
		result_do = 0; // якщо квиток не “щасливий”
	}	
return 0;
}
