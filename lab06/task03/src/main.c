#define NUM 6174 // задане число

int main() {
	int num = NUM;
	char string[50] = {0}; // результуючий масив
	short size = 0;
	// розряди чисел у строковому типі
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	// цифри, які будемо використовувати як строки
	char one[3] = {'o','n','e'};
	char two[3] = {'t','w','o'};
	char three[5] = {'t','h','r','e','e'};
	char four[4] = {'f','o','u','r'};
	char five[4] = {'f','i','v','e'};
	char six[3] = {'s','i','x'};
	char seven[5] = {'s','e','v','e','n'};
	char eight[5] = {'e','i','g','h','t'};
	char nine[4] = {'n','i','n','e'};
	char zero[4] = {'z','e','r','o'};
	int cond = 0;

	for (int i = 10000; i > 0; i /= 10) { // довжина числа
		if (num > 0) {
			cond = num % i;
			if (cond != num) {
				size++;
			}
			num %= i;
		}
	}

	num = NUM;
	int iStart = 0;

	if (size == 4) { // якщо число чотирьохзначне, записуємо першу цифру строкою
		num = NUM / 1000;
		switch (num) {
		case 1:
			for (int t = 0; t < 3; t++) {
				string[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				string[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				string[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				string[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				string[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				string[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				string[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				string[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				string[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int th = 0; th < 10; th++, iStart++) { // додаємо розряд 
			string[iStart] = thousand[th];
		}

		size--; // перебираємо числа на розряд нижчі
		num = NUM % 1000;
	}
	if (size == 3) { // записуємо сотні у строку
		num = num / 100;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				string[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				string[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				string[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				string[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				string[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				string[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				string[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				string[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				string[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int h = 0; h < 9; h++, iStart++) { // додаємо розряд
			string[iStart] = hundred[h];
		}
		size--; // перебираємо числа на розряд нижчі
		num = NUM % 100;
	}

	if (size == 2) { // записуємо десятки у строку
		num = num / 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				string[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				string[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				string[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				string[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				string[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				string[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				string[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				string[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				string[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int d = 0; d < 8; d++, iStart++) {
			string[iStart] = decade[d];
		}
		size--;
	}

	if (size == 1) { // записуємо одиниці строками
		num = NUM % 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				string[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				string[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				string[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				string[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				string[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				string[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				string[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				string[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				string[iStart] = nine[t];
				iStart++;
			}
			break;
		}
	}
	if(NUM == 0) { // якщо задане число дорівнює 0
        	for (int i = 0; i < 4; i++) {
        		string[iStart] = zero[i];
           		 iStart++;
        	}
        }
	string[iStart] = '\0';
return 0;
}
