#define R 13 // заданий радіус
#define PI 3.14 // число пі

int main() {
	char command = 'l'; // команда ('l'- знаходження довжини кола, 's'- знаходження площі кола, 'v'- знаходження об'єму кулі)
	double result;
	
	switch (command) {
	
		case 'l':
			result = 2 * PI * R;
			break;
		
		case 's':
			result = PI * R * R;
			break;
		
		case 'v':
			result = (double)4 / 3 * PI * R * R * R;
			break;
		}
	return 0;
}
