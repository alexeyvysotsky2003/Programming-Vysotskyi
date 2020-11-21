#define NUMBER 495 // задане тризначне число

int main() {

	int first = NUMBER / 100; // виокремлення першої цифри
	int second = NUMBER % 100 / 10; // виокремлення другої цифри
	int third = NUMBER % 10; // виокремлення третьої цифри
	int result = third * 100 + second * 10 + first; // запис заданого числа у зворотному порядку
	
	return 0;
}
