#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int operand1 = 0, operand2 = 0;

	scanf("%d %d", &operand1, &operand2);

	if (operand1 >= 0 && operand2 <= 10) {
		printf("%d", operand1 + operand2);
	}


	return 0;
}