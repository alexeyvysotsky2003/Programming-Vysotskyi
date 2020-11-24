int main() {
	int k = 92;
	int m = 34;
	int n = 25;
	int temp; // допоміжна змінна

	// перестановка чисел місцями	
	if (n < k){
		temp = n;
		n = k;
		k = temp;
		}
	if (n < m){
		temp = n;
		n = m;
		m = temp;
		}
	if (m < k){
		temp = m;
		m = k;
		k = temp;
		}
	return 0;
}
