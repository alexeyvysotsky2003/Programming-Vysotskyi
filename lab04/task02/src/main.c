#define N 354.847 // задане число

int main() {

	int int_part = (int)N; // виокремлення цілої частини
	double float_part = (N * 1000) - (int_part * 1000); // виокремлення дробової частини, переведення в цілий вид
	double result;
	
	if (int_part != 0){
		double comparison = float_part / int_part; // у скільки разів дробова частина більше за цілу
		result = (double)((int)(comparison * 100))/ 100; // обрізання рельтату порівняння до другого знаку після коми
		} 
		else {
		result = -1; // якщо порівняння неможливе (ціла частина дорінює нулю)
		} 
		
	return 0;
}
