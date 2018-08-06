#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int N = 0;

	scanf("%d", &N);

	if (N >= 1 && N <= 100000) {

		for (int i = 1; i <= N; i++)
			printf("%d\n", i);

	}

	return 0;
}