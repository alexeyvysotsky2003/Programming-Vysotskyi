#define START 7 // початок діапазону
#define END 10 // кінець діапазону

int main() {

	int n = END - START + 1; // кількість чисел у заданому діапазоні
	int sum = (float)(START + END) / 2 * n; // сума чисел заданого діапазону
	
	return 0;
}
