#include <stdlib.h>
#include <time.h>

/**
 * @mainpage
 * # Загальне завдання
 * **Переробити** програми, що були розроблені під час виконання лабораторних робіт з теми «Цикли» таким чином, щоб використовувалися функції для обчислення результату.
 *
 * # Індивідуальне завдання
 * **Визначити**, чи є ціле 6-значне число «щасливим» квитком («щасливий квиток» – квиток, в якому сума першої половини чисел номера дорівнює сумі другої половини. Наприклад, білет з номером 102300 є щасливим, бо 1 + 0 + 2 = 3 + 0 + 0).
 *
 * @author Vysotskyi O.
 * @date 13-jan-2021
 * @version 1.0
 */

int cycle_for (int num);
int cycle_while (int num);
int cycle_do (int num);

/**
 * @param num - номер білету, який бажаємо перевірити
 * @param result_for - результат циклу for
 * @param result_while - результат циклу while
 * @param result_do - резултат циклу do_while
*/

int main() { /**за допомогою функції rand генерує псевдовипадкове 6-значне число. Викликає функції cycle_for, cycle_while, cycle_do*/
	srand(time(NULL));
    
	int num = rand() % 899999 + 100000; // діапазон випадкого числа від 100 000 до 999 999

	int result_for = cycle_for(num);
	int result_while = cycle_while(num); 
	int result_do = cycle_do(num);
	
	return 0;
}
int cycle_for (int num) { /**Функція cycle_for: перевіряє, чи є білет щасливим, за допомогою циклу for*/
	int half1 = 0;
	int half2 = 0;
	int result_for = 0;
	for (int i = 1000; (num / i) > 0; i *= 10) {
		half1 += num / i % 10;
		}
	for (int j = 1; (num % 1000 / j) > 0; j *= 10) {
		half2 += num % 1000 / j % 10;
		}
		
	if (half1 == half2) { // порівняння двох отриманих чисел
 		result_for = 1; // якщо квиток “щасливий”
	} else {
		result_for = 0; // якщо квиток не “щасливий”
	}
	return result_for;
}

int cycle_while (int num) { /**Функція cycle_while: перевіряє, чи є білет щасливим, за допомогою циклу while*/
	int i = 1000;
	int j = 1;
	int half1 = 0;
	int half2 = 0;
	int result_while = 0;
	while ((num / i) > 0 && num % 1000 / j > 0) {
		half1 += num / i % 10;
		half2 += num % 1000 / j % 10;
		i *= 10;
		j *= 10;
	}
		
	if (half1 == half2) { // порівняння двох отриманих чисел
 		result_while = 1; // якщо квиток “щасливий”
	} else {
		result_while = 0; // якщо квиток не “щасливий”
	}
	return result_while;
}

int cycle_do (int num) { /**Функція cycle_do: перевіряє, чи є білет щасливим, за допомогою циклу do_while*/
	int result_do = 0;
	int half1 = 0;
	int half2 = 0;
	int i = 1000;
	int j = 1;
	do {
		half1 += num / i % 10;
		half2 += num % 1000 / j % 10;
		i *= 10;
		j *= 10;
	} while ((num / i) > 0 && num % 1000 / j > 0);
	
	if (half1 == half2) { // порівняння двох отриманих чисел
 		result_do = 1; // якщо квиток “щасливий”
	} else {
		result_do = 0; // якщо квиток не “щасливий”
	}	
	return result_do;
}
