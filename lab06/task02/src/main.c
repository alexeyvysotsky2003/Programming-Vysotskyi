#define START 3 // діапазон, у якому буде пошук простих чисел
#define END 40 
#define SIZE 50 // розмір масиву, який буде заповнений простими числами

int main() {
	int arr[SIZE] = {0}; // масив простих чисел
	int j = 0;
	for (int num = START; num <= END; num++) { // перевірка кожного числа заданого діапазону
		int check = 0;	
		for (int i = 2; i < num; i++) {
			if (num % i == 0) { // якщо число ділиться хоча б на одне число, менше від нього, воно є складеним
				break;
			}
			if (i == num - 1) { // якщо число не поділилося на жодне число, менше від нього, воно є простим
				arr[j] = num;
				j++;
			}
		}
	}
return 0;
}
