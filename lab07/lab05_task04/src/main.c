#include <stdio.h>
#include <time.h>

int define_perfect_number_for (int num);
int define_perfect_number_while (int num);
int define_perfect_number_do (int num);

int main() {
	srand(time(NULL));
	
	int num = rand() % 20;
	
	int result_for = define_perfect_number_for(num); // якщо число досконале, то результат 1
	int result_while = define_perfect_number_while(num); // якщо число досконале, то результат 1
	int result_do = define_perfect_number_do(num); // якщо число досконале, то результат 1
	
	return 0;
}

int define_perfect_number_for (int num) {	
	int sum = 0;
	int result_for;	
	for (int i = 1; i < num; i++) { // визначення суми дільників числа
		if (num % i == 0) {
			sum += i;
		}
	}
	result_for = num == sum ? 1 : 0; // якщо число досконале, то результат 1
	return result_for;
}
int define_perfect_number_while (int num) {		
	int sum = 0;
	int i = 1;
	int result_while;
	
	while (i < num) { // визначення суми дільників числа
		if (num % i == 0) {
			sum += i;
		}
		i++;
	}
	result_while = num == sum ? 1 : 0; // якщо число досконале, то результат 1
	return result_while;
}
int define_perfect_number_do (int num) {			
	int sum = 0;
	int i = 1;
	int result_do;
	
	do { // визначення суми дільників числа
		if (num % i == 0) {
			sum += i;
		}
		i++;
	} while (i < num);
	result_do = num == sum ? 1 : 0; // якщо число досконале, то результат 1
	return result_do;
}
