#include <stdio.h>

int main() {
	int digits[3], calc[3];
	int operand1, operand2;
	int idx = 0;
	int result;

	scanf("%d", &operand1);
	scanf("%d", &operand2);

	while (operand2 > 0) {
		digits[idx] = operand2 % 10;
		calc[idx] = digits[idx] * operand1;
		operand2 = operand2 / 10;
		idx = idx + 1;
	}

	result = (calc[2] * 100) + (calc[1] * 10) + calc[0];

	printf("%d\n", calc[0]);
	printf("%d\n", calc[1]);
	printf("%d\n", calc[2]);
	printf("result is: %d\n", result);

	return 0;
}