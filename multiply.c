#include <stdio.h>

int main() {
	int digits[3], calc[3];
	int operand1, operand2;
	int idx = 0;

	scanf("%d", &operand1);
	scanf("%d", &operand2);

	while (operand2 > 0) {
		digits[idx] = operand2 % 10;
		calc[idx] = digits[idx] * operand1;
		operand2 = operand2 / 10;
		idx = idx + 1;
	}

	printf("%d\n", calc[0]);
	printf("%d\n", calc[1]);
	printf("%d\n", calc[2]);

	return 0;
}