#include <stdlib.h>
#include <time.h>

int get_root_for (int num);
int get_root_while (int num);
int get_root_do (int num);

int main() {
	srand(time(NULL));

	int num = rand() % 50;
	
	int result_for = get_root_for (num); // визначення корня числа
	int result_while = get_root_while (num); // визначення корня числа
	int result_do = get_root_do (num); // визначення корня числа

	return 0;
}

int get_root_for (int num) {
	int result_for = 0;
	for (int i = 0; i < num; i++) { // визначення корня числа
		if (i * i == num) {
			result_for = i;
			break;
		}
	}
	return result_for;
}

int get_root_while (int num) {
	int result_while = 0;	
	int i = 0;
	while (i < num) { // визначення корня числа
		if (i * i == num) {
			result_while = i;
			break;
		}
		i++;
	}
	return result_while;
}

int get_root_do (int num) {
	int result_do = 0;
	int i = 0;
	do { // визначення корня числа
		if (i * i == num) {
			result_do = i;
			break;
		}
		i++;	
	} while (i < num);
	return result_do;
}
