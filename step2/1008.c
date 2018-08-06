#include <stdio.h>	
#include <stdlib.h>

int main(void) {

	double operand1 = 0, operand2 = 0;

	scanf("%lf %lf", &operand1, &operand2);

	if (operand1 > 0 && operand2 < 10)
		printf("%.9lf", operand1 / operand2);


	return 0;
}