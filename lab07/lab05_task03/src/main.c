#include <stdlib.h>
#include <time.h>

int cycle_for (int num);
int cycle_while (int num);
int cycle_do (int num);

int main() {
	srand(time(NULL));
    
	int num = rand() % 899999 + 100000; // діапазон випадкого числа від 100 000 до 999 999

	int result_for = cycle_for(num);
	int result_while = cycle_while(num); 
	int result_do = cycle_do(num);
	
	return 0;
}
int cycle_for (int num) {
	int half1_for = 0;
	int half2_for = 0;
	int result_for = 0;
	for (int i = 1000; (num / i) > 0; i *= 10) {
		half1_for += num / i % 10;
		}
	for (int j = 1; (num % 1000 / j) > 0; j *= 10) {
		half2_for += num % 1000 / j % 10;
		}
		
	if (half1_for == half2_for) { // порівняння двох отриманих чисел
 		result_for = 1; // якщо квиток “щасливий”
	} else {
		result_for = 0; // якщо квиток не “щасливий”
	}
	return result_for;
}

int cycle_while (int num) {
	int i = 1000;
	int j = 1;
	int half1_while = 0;
	int half2_while = 0;
	int result_while = 0;
	while ((num / i) > 0 && num % 1000 / j > 0) {
		half1_while += num / i % 10;
		half2_while += num % 1000 / j % 10;
		i *= 10;
		j *= 10;
		}
		
	if (half1_while == half2_while) { // порівняння двох отриманих чисел
 		result_while = 1; // якщо квиток “щасливий”
	} else {
		result_while = 0; // якщо квиток не “щасливий”
	}
	return result_while;
}

int cycle_do (int num) {
	int result_do = 0;
	int half1_do = 0;
	int half2_do = 0;
	int i = 1000;
	int j = 1;
	do {
		half1_do += num / i % 10;
		half2_do += num % 1000 / j % 10;
		i *= 10;
		j *= 10;
	} while ((num / i) > 0 && num % 1000 / j > 0);
	
	if (half1_do == half2_do) { // порівняння двох отриманих чисел
 		result_do = 1; // якщо квиток “щасливий”
	} else {
		result_do = 0; // якщо квиток не “щасливий”
	}	
	return result_do;
}
