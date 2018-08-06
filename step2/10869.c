#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int operand1 = 0, operand2 = 0, operand3 = 0;

	scanf("%d %d %d", &operand1, &operand2, &operand3);

	if (operand1 >= 2 && operand2 <= 10000 && operand3 <= 10000) {
		printf("%d\n", (operand1 + operand2) % operand3);
		printf("%d\n", ((operand1%operand3 + operand2 % operand3) % operand3));
		printf("%d\n", (operand1 * operand2) % operand3);
		printf("%d\n", ((operand1%operand3 * operand2 % operand3) % operand3));

	}


	return 0;
}