#include <stdlib.h>
#include <time.h>

int fillingNum1 (int n1, int a, char result[]);
int thousand (int a, char result[]);
int fillingNum2 (int n2, int a, char result[]);
int hundred (int a, char result[]);
int fillingNum3 (int n3, int a, char result[]);
int decade (int a, char result[]);
int fillingNum4 (int n4, int a, char result[]);

#define K 50 // розмір масиву

int main() {
        srand(time(NULL));
        
        int a = 0; // коефіцієнт
        char result[K];
        int n = rand() % 9999; // число, обране псевдовипадково, яке буде переведено у рядок
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        
        if (n > 999) {
        n1 = n / 1000; // виокремлюємо першу цифру
        n2 = n % 1000 / 100; // виокремлюємо другу цифру
        n3 = n / 10 % 10; // виокремлюємо третю цифру
        n4 = n % 1000 % 100 % 10; // виокремлюємо четверту цифру
        } else {
                 n1 = 0;
                 n2 = n / 100; // виокремлюємо другу цифру
                 n3 = n % 100 / 10; // виокремлюємо третю цифру
                 n4 = n % 100 % 10; // виокремлюємо четверту цифру
        }
        
        a = fillingNum1(n1, a, result);
        
        a = thousand (a, result);
        
        a = fillingNum2 (n2, a, result);
        
        a = hundred (a, result);
        
        a = fillingNum3 (n3, a, result);
        
        a = decade(a, result);
                
        a = fillingNum4(n4, a, result);
        
        result [a] = '\0';
        return 0;
}

int fillingNum1 (int n1, int a, char result[]) {
        
        char one[3] = {'o','n', 'e'};
        char two[3] = {'t', 'w', 'o'};
        char three[5] = {'t', 'h', 'r', 'e', 'e'};
        char four[4] = {'f', 'o', 'u', 'r'};
        char five[4] = {'f', 'i', 'v', 'e'};
        char six[3] = {'s', 'i', 'x'};
        char seven[5] = {'s', 'e', 'v', 'e', 'n'};
        char eight[5] = {'e', 'i', 'g', 'h', 't'};
        char nine[4] = {'n', 'i', 'n' , 'e'};
        
        if (n1 > 0) {
        switch (n1) { // запуск перевірки першого числа
                case 1 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = one[i];
                        a++;
                }
                        break;
                case 2 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = two[i];
                        a++;
                }
                        break;
                case 3 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = three[i];
                        a++;
                }
                        break;
                case 4 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = four[i];
                        a++;
                }
                        break;
                case 5 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = five[i];
                        a++;
                }
                        break;
                case 6 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = six[i];
                        a++;
                }
                        break;
                case 7 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = seven[i];
                        a++;
                }
                        break;
                case 8 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = eight[i];
                        a++;
                }
                        break;
                case 9 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = nine[i];
                        a++;
                }
                        break;
        }
        }
        return a;
}
        
int thousand (int a, char result[]) {
	char thousand[10] = {' ', 't', 'h', 'o', 'u', 's', 'a', 'n', 'd', ' '};
	if (a > 2) {
                for (int i = 0; i < 10; i++) { // цикл для заповнення result словом "тисяча"
                        result [a] = thousand[i];
                        a++;
                } // відстань між словом "тясяча" та другим числом, якщо воно є
                }
	return a;
}

int fillingNum2 (int n2, int a, char result[]) {
                
	char one[3] = {'o','n', 'e'};
	char two[3] = {'t', 'w', 'o'};
	char three[5] = {'t', 'h', 'r', 'e', 'e'};
	char four[4] = {'f', 'o', 'u', 'r'};
	char five[4] = {'f', 'i', 'v', 'e'};
	char six[3] = {'s', 'i', 'x'};
	char seven[5] = {'s', 'e', 'v', 'e', 'n'};
	char eight[5] = {'e', 'i', 'g', 'h', 't'};
	char nine[4] = {'n', 'i', 'n' , 'e'};
                
	if (n2 > 0) { 
                switch (n2) { // перевірка другого числа
                        case 1 :
                                for (int i = 0; i < 3; i++) {
                                        result[a] = one[i];
                                a++;
                        }
                                break;
                        case 2 :
                                for (int i = 0; i < 3; i++) {
                                        result[a] = two[i];
                                a++;
                        }
                                break;
                        case 3 :
                                for (int i = 0; i < 5; i++) {
                                        result[a] = three[i];
                                a++;
                        }
                                break;
                        case 4 :
                                for (int i = 0; i < 4; i++) {
                                        result[a] = four[i];
                                a++;
                        }
                                break;
                        case 5 :
                                for (int i = 0; i < 4; i++) {
                                        result[a] = five[i];
                                a++;
                        }
                                break;
                        case 6 :
                                for (int i = 0; i < 3; i++) {
                                        result[a] = six[i];
                                a++;
                        }
                                break;
                        case 7 :
                                for (int i = 0; i < 5; i++) {
                                        result[a] = seven[i];
                                a++;
                        }
                                break;
                        case 8 :
                                for (int i = 0; i < 5; i++) {
                                        result[a] = eight[i];
                                a++;
                        }
                                break;
                        case 9 :
                                for (int i = 0; i < 4; i++) {
                                        result[a] = nine[i];
                                a++;
                        }
                                break;
                }
                }
        return a;
}
int hundred (int a, char result[]) {
	char hundred[9] = {' ', 'h' , 'u', 'n', 'd', 'r', 'e', 'd', ' '};
                        
	if (a > 2){
		for (int i = 0; i < 9; i++) {
			result [a] = hundred[i];
			a++;
		}
	}
	return a;
}

int fillingNum3 (int n3, int a, char result[]) {
        
        char one[3] = {'o','n', 'e'};
        char two[3] = {'t', 'w', 'o'};
        char three[5] = {'t', 'h', 'r', 'e', 'e'};
        char four[4] = {'f', 'o', 'u', 'r'};
        char five[4] = {'f', 'i', 'v', 'e'};
        char six[3] = {'s', 'i', 'x'};
        char seven[5] = {'s', 'e', 'v', 'e', 'n'};
        char eight[5] = {'e', 'i', 'g', 'h', 't'};
        char nine[4] = {'n', 'i', 'n' , 'e'};
        
        if (n3 > 0) { 
        switch (n3) { // перевірка третього числа
                case 1 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = one[i];
                        a++;
                }
                        break;
                case 2 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = two[i];
                        a++;
                }
                        break;
                case 3 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = three[i];
                        a++;
                }
                        break;
                case 4 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = four[i];
                        a++;
                }
                        break;
                case 5 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = five[i];
                        a++;
                }
                        break;
                case 6 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = six[i];
                        a++;
                }
                        break;
                case 7 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = seven[i];
                        a++;
                }
                        break;
                case 8 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = eight[i];
                        a++;
                }
                        break;
                case 9 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = nine[i];
                        a++;
                }
                        break;
        }
        }
        return a;
}
int decade (int a, char result[]) {
	char decade[8] = {' ', 'd', 'e', 'c', 'a', 'd', 'e', ' '};
                        
	if (a > 2) {
		for (int i = 0; i < 8; i++) {
                        result [a] = decade[i];
                        a++;
                }
	}
return a;
}
int fillingNum4 (int n4, int a, char result[]) {
        
        char one[3] = {'o','n', 'e'};
        char two[3] = {'t', 'w', 'o'};
        char three[5] = {'t', 'h', 'r', 'e', 'e'};
        char four[4] = {'f', 'o', 'u', 'r'};
        char five[4] = {'f', 'i', 'v', 'e'};
        char six[3] = {'s', 'i', 'x'};
        char seven[5] = {'s', 'e', 'v', 'e', 'n'};
        char eight[5] = {'e', 'i', 'g', 'h', 't'};
        char nine[4] = {'n', 'i', 'n' , 'e'};
        
        if (n4 > 0) { 
        switch (n4) { // перевірка четвертого числа
                case 1 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = one[i];
                        a++;
                }
                        break;
                case 2 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = two[i];
                        a++;
                }
                        break;
                case 3 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = three[i];
                        a++;
                }
                        break;
                case 4 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = four[i];
                        a++;
                }
                        break;
                case 5 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = five[i];
                        a++;
                }
                        break;
                case 6 :
                        for (int i = 0; i < 3; i++) {
                                result[a] = six[i];
                        a++;
                }
                        break;
                case 7 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = seven[i];
                        a++;
                }
                        break;
                case 8 :
                        for (int i = 0; i < 5; i++) {
                                result[a] = eight[i];
                        a++;
                }
                        break;
                case 9 :
                        for (int i = 0; i < 4; i++) {
                                result[a] = nine[i];
                        a++;
                }
                        break;
        }
        }
        return a;
}
