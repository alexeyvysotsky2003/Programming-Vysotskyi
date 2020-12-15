#define N 144 // задане число
int main() {
	int result_for;
	int result_while;
	int result_do;
	int i;
	for (i = 0; i < N; i++) { // визначення корня числа
		if (i * i == N) {
			result_for = i;
			break;
		}
	}
	
	i = 0;
	while (i < N) { // визначення корня числа
		if (i * i == N) {
			result_while = i;
			break;
		}
		i++;
	}
	
	i = 0;
	do { // визначення корня числа
		if (i * i == N) {
			result_do = i;
			break;
		}
		i++;	
	} while (i < N);

return 0;
}
