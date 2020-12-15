#define N 13 // задане число
int main() {
	int result_for;
	int tempFor;
	int i;
	for (i = 2; i < N; i++) {
		tempFor = N % i;
		if (tempFor == 0) {
			result_for = 0; break; // число складене
		} else { 
			result_for = 1;  // число просте
			}
		}
	i = 2;
	int result_while;
	int tempWhile;
	
	while (i < N) {
		tempFor = N % i;
		if (tempFor == 0) {
			result_while = 0; break; // число складене
		} else { 
			result_while = 1;  // число просте
			}
		i++;
		}
	i = 2;
	int result_do;
	int tempDo;
	do {
		tempFor = N % i;
		if (tempFor == 0) {
			result_do = 0; break; // число складене
			} else { 
			result_do = 1;  // число просте
			}
		i++;
	} while (i < N);
		
return 0;
}
