#define N 6 // задане число 
int main() {
	int sum = 0;
	int i = 1;
	int result_for;
	int result_while;
	int result_do;
	
	for (i; i < N; i++) { // визначення суми дільників числа
		if (N % i == 0) {
			sum += i;
		}
	}
	result_for = N == sum ? 1 : 0; // якщо число досконале, то результат 1
	
	sum = 0;
	i = 1;
	
	while (i < N) { // визначення суми дільників числа
		if (N % i == 0) {
			sum += i;
		}
		i++;
	}
	result_while = N == sum ? 1 : 0; // якщо число досконале, то результат 1
	
	sum = 0;
	i = 1;
	
	do { // визначення суми дільників числа
		if (N % i == 0) {
			sum += i;
		}
		i++;
	} while (i < N);
	result_do = N == sum ? 1 : 0; // якщо число досконале, то результат 1
	
return 0;
}
