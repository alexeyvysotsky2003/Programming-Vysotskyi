#include <stdlib.h>
#include <time.h>

int NSD_for (int num1, int num2); // попереднє оголошення функції
int NSD_while (int num1, int num2); // попереднє оголошення функції
int NSD_do (int num1, int num2); // попереднє оголошення функції

int main() {
	
	srand(time(NULL));
	int a = rand() % 80; // випадкове число ділемо з остачою на задане число, тим самим задаємо значення першого числа 0 до 80
	int b = rand() % 40; // випадкове число ділемо з остачою на задане число, тим самим задаємо значення першого числа 0 до 40
    
	int nsd_for = NSD_for(a, b); // повертаємо результат функціі
	int nsd_while = NSD_while(a, b); // повертаємо результат функціі
	int nsd_do = NSD_do(a, b); // повертаємо результат функціі
	
	return 0;
}
int NSD_for(int num1, int num2) { // функція, яка знаходить найбільший спільний дільник з циклу for
	int nsd_for  = 0;
	for (num1, num2; num1 > 0 && num2 > 0;) { // ділення з остачою більшого числа на менше, доки остача не буде 0 (алгоритм Евкліда) 
		(num1 > num2) ? (num1 %= num2) : (num2 %= num1);
		nsd_for = num1 + num2;
	}
	
	return nsd_for;
}
int NSD_while(int num1, int num2) { // функція, яка знаходить найбільший спільний дільник з циклу while
	int nsd_while = 0;
	while (num1 > 0 && num2 > 0) { // ділення з остачою більшого числа на менше, доки остача не буде 0 (алгоритм Евкліда) 
		(num1 > num2) ? (num1 %= num2) : (num2 %= num1);
		nsd_while = num1 + num2;
	}
	
	return nsd_while;
}
int NSD_do(int num1, int num2) { // функція, яка знаходить найбільший спільний дільник з циклу do
	int nsd_do = 0;
	do { // ділення з остачою більшого числа на менше, доки остача не буде 0 (алгоритм Евкліда) 
		(num1 > num2) ? (num1 %= num2) : (num2 %= num1);
		nsd_do = num1 + num2;
	} while (num1 > 0 && num2 > 0);
	
	return nsd_do;
}
