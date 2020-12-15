int main() {
	char text[] = "My name is Alex.    What is your name?"; // заданий текст
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
return 0;
}
