#include <stdio.h>

int main() {
	int digits[3];
	int operand1, operand2;
	int idx = 0;

	scanf("%d", &operand1);
	scanf("%d", &operand2);

	while (operand2 > 0) {
		digits[idx] = operand2 % 10;
		operand2 = operand2 / 10;
		idx = idx + 1;
	}

	return 0;
}