#include <stdlib.h>
#include <time.h>

int size_word (char str_in[], int str_len);
void center_word (char str_result[], char str_in[], int str_len, char zap, int l);

int main() {
	srand(time(NULL));
	int l = rand() % 20 + 10; // довжина результуючого рядка, визначена псевдовипадковим числом
	
	char str_result[l]; // результуючий рядок
	char zap = '_'; // заповнювач
	char str_in[] = "apples"; // задане слово
	
	int str_len = size_word (str_in, str_len); // розмір заданого слова
	
	center_word (str_result, str_in, str_len, zap, l); // центрування слова
	
	str_result[l-1] = '\0'; // останній елемент результуючого рядка - '\0'

	return 0;
}

int size_word (char str_in[], int str_len) {
	for (int i = 0; ; i++) {
		if (str_in[i] == '\0'){ // знаходимо розмір заданого слова
			break;
		} else {
			str_len++;
		}
	}
	return str_len;
}

void center_word (char str_result[], char str_in[], int str_len, char zap, int l) {
	int a = l - str_len - 1; // кількість заповнювачів з урахуванням слова

	a /= 2; // скільки потрібно заповнювачів з кожної сторони слова

	for (int i = 0; i < a; i++) {
		str_result[i] = zap; // заповнюємо заповнювачем місце перед словом
	}
	int b = 0;
	for (int i = a, b; i < a + str_len; i++, b++) {
		str_result[i] = str_in[b]; // заповнюємо масив словом
	}
	for (int i = a + str_len; i < l - 1; i++) {
		str_result[i] = zap; // заповнюємо заповнювачем місце після слова
	}
}
