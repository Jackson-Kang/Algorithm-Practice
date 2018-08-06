#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int N = 0;

	scanf("%d", &N);

	if (N >= 3 && N <= 5000) {

		int width = N / 3 + 1;
		int height = N / 5 + 1;
		int count = 0;
		int least_numb = 5000;
		int i = 0, j = 0;

		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				if ((5 * i + 3 * j) == N) {
					if (least_numb > i + j) {
						least_numb = i + j;

						count++;
					}
				}
			}
		}


		if (count == 0)
			printf("-1");
		else
			printf("%d", least_numb);


	}

	return 0;
}