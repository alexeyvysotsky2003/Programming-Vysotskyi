#include <stdlib.h>
#include <time.h>

#define N 10 // розмір вихідного масиву
void get_prime_numbers (int start, int end, int prime_numbers[]); // функція пошуку простих чисел у діапазоні
int main() {
	srand(time(NULL));
	
	int start = rand() % 100; // початок діапазону, заданий випадковим числом
	int end = rand() % 100 + 100; // кінець діапазону, заданий випадковим числом
	
	int prime_numbers[N] = {0}; // масив простих чисел
	
	get_prime_numbers (start, end, prime_numbers);
	
	return 0;
}

void get_prime_numbers (int start, int end, int prime_numbers[]) {
	int j = 0;
	for (int num = start; num <= end; num++) { // перевірка кожного числа заданого діапазону
		int check = 0;	
		for (int i = 2; i < num; i++) {
			if (num % i == 0) { // якщо число ділиться хоча б на одне число, менше від нього, воно є складеним
				break;
			}
			if (i == num - 1) { // якщо число не поділилося на жодне число, менше від нього, воно є простим
				prime_numbers[j] = num;
				j++;
			}
		}
	}
}
