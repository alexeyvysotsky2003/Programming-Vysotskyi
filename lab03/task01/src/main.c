int main() {

	float r1 = 6; // опір першого резистора
	float r2 = 13; // опір другого резистора
	float r3 = 8; // опір третього резистора
	
	float r = 1 / (1 / r1 + 1 / r2 + 1 / r3); // загальний опір резисторів при паралельному з'єднанні
	
	return 0;
}