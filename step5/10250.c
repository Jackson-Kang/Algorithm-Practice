#include <stdio.h>
#include <stdlib.h>

/*
10250. ACM Hotel Problem

Time complexity: O ( num_of_data )

*/

int main(void) {

	int num_of_data = 0;
	int height = 0, width = 0, order = 0;
	int room_number = 0;

	scanf("%d", &num_of_data);

	for (int i = 0; i < num_of_data; i++) {

		scanf("%d %d %d", &height, &width, &order);

		if ((height >= 1 && height <= 99) && (width >= 1 && width <= 99) && (1 <= order && order <= height * width)) {

			if (order % height != 0)
				room_number = (order % height) * 100 + (order / height + 1);
			else
				room_number = height * 100 + order / height;

			printf("%d\n", room_number);

		}
	}

	return 0;
}