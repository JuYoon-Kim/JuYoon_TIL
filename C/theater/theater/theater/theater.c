#include <stdio.h>
#define SIZE 10

int main(void)
{
	char ans1;
	int ans2, i, j;
	int seats[SIZE][SIZE] = { 0 };

	while (1)
	{
		printf("좌석을 예약 또는 예약취소 하시겠습니까?(y 또는 c 또는 n): ");
		ans1 = _getch();
		printf("\n");

		if (ans1 == 'y')
		{
			printf("-------------------------------\n");
			for (i = 0; i < 10; i++)
			{
				for (j = 1; j <= 10; j++)
				{
					printf("%d ", i * j + j);
				}
				printf("\n");
			}
			printf("-------------------------------\n");

			for (i = 0; i < SIZE; i++)
			{
				for (j = 0; j < SIZE; j++)
				{
					printf(" %d", seats[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			printf("몇번째 좌석을 예약하시겠습니까: ");
			scanf_s("%d", &ans2);

			if (ans2 <= 0 || ans2 > SIZE)
			{
				printf("1부터 10사이의 숫자를 입력하세요: \n");
				continue;
			}
			if (seats[ans2 - 1] == 0) // 예약되지 않았으면
			{
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else // 이미 예약되었으면
				printf("이미 예약된 자리입니다.\n");
		}

		if (ans1 == 'c')
		{
			printf("-------------------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("-------------------------------\n");

			for (i = 0; i < SIZE; i++)
			{
				printf(" %d", seats[i]);
			}
			printf("\n");
			printf("몇번째 좌석을 취소하시겠습니까: ");
			scanf_s("%d", &ans2);

			if (ans2 <= 0 || ans2 > SIZE)
			{
				printf("1부터 10사이의 숫자를 입력하세요\n");
				continue;
			}
			if (seats[ans2 - 1] != 0) // 이미 예약되었으면
			{
				seats[ans2 - 1] = 0;
				printf("예약취소 되었습니다.\n");
			}
			else  // 예약되지 않았으면
				printf("빈 자리입니다.\n");
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}