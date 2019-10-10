#include <stdio.h>

#define SIZE 20

int main()
{
	int i, j, temp, least;

	int list[SIZE] = { 0 };

	for (i = 0; i < SIZE; i++)
	{
		printf("수를 입력하시오: ");
		scanf_s("%d", &list[i]);
	}

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	return 0;
}