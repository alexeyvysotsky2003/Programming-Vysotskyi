#include <stdlib.h>
#include <time.h>
int get_word_count (char text[]);

int main() {
	char text[] = "My name is Alex.    What is your name?"; // заданий текст
	int result = get_word_count (text);
	
	return 0;
}

int get_word_count (char text[]) {
	int result = 1; // кількість слів у тексті
	int a = 0; // кількість символів у тексті
	for (int i = 0; ;i++) { // знаходження кількості символів у тексті
		if (text[i] == '\0') {
			break;
		}
		a++;
	}
	for (int i = 0; i < a; i++) {
		 if (text[i] == ' ' && text [i + 1] != ' ' ) {
		 	result++;
		 }
	}
	return result;
}
