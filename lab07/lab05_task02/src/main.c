#include <stdlib.h>
#include <time.h>

int define_prime_num_for (int num); // попереднє оголошення функції
int define_prime_num_while(int num); // попереднє оголошення функції
int define_prime_num_do (int num); // попереднє оголошення функції

int main() {
	
	srand(time(NULL));
	int x = rand() % 80; // випадкове число ділемо з остачою на задане число, тим самим задаємо значення першого числа 0 до 80
    
	int result_for = define_prime_num_for(x); // повертаємо результат функціі
	int result_while = define_prime_num_while(x); // повертаємо результат функціі
	int result_do = define_prime_num_do(x); // повертаємо результат функціі
	
	return 0;
}

int define_prime_num_for(int num) {
	int result_for;
	int tempFor;
	for (int i = 2; i < num; i++) {
		tempFor = num % i;
		if (tempFor == 0) {
			result_for = 0; break; // число складене
		} else { 
			result_for = 1;  // число просте
		}
	}
	return result_for;
}	

int define_prime_num_while(int num) {	
	int i = 2;
	int result_while;
	int tempWhile;
	
	while (i < num) {
		tempWhile = num % i;
		if (tempWhile == 0) {
			result_while = 0; break; // число складене
		} else { 
			result_while = 1;  // число просте
		}
		i++;
	}
	return result_while;
}

int define_prime_num_do(int num) {	
	int i = 2;
	int result_do;
	int tempDo;
	do {
		tempDo = num % i;
		if (tempDo == 0) {
			result_do = 0; break; // число складене
			} else { 
			result_do = 1;  // число просте
		}
		i++;
	} while (i < num);
	return result_do;	
}
