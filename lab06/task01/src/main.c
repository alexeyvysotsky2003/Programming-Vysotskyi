#define L 15 // довжина рядка

int main() {
	char str_result[L]; // результуючий рядок
	char zap = '_'; // заповнювач
	char str_in[] = "apples"; // задане слово
	int str_len = 0; // розмір заданого слова
	int a = 0; // кількість елементів заповнювача з кожної сторони
	
	for (int i = 0; ; i++) {
		if (str_in[i] == '\0'){ // знаходимо розмір заданого слова
			break;
		} else {
		str_len++;
		}
	}
	a = L - str_len - 1; // кількість заповнювачів з урахуванням слова

	a /= 2; // скільки потрібно заповнювачів з кожної сторони слова

	for (int i = 0; i < a; i++) {
		str_result[i] = zap; // заповнюємо заповнювачем місце перед словом
	}
	int b;
	for (int i = a, b = 0; i < a + str_len; i++, b++) {
		str_result[i] = str_in[b]; // заповнюємо масив словом
	}
	for (int i = a + str_len; i < L - 1; i++) {
		str_result[i] = zap; // заповнюємо заповнювачем місце після слова
	}
	str_result[L-1] = '\0'; // останній елемент результуючого рядка - '\0'
    
return 0;
}
