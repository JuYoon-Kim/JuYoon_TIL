#pragma once
#include <stdio.h>
#include <conio.h>
#define SIZE 10

void seat();

void seat()
{
	char ans1;						//예약 예약취소 종료
	char ans2, ans3, i, j;			// ans2: 열 고르기 ans3: 행 고르기
	int seats[SIZE][SIZE] = { 0 };

	while (1)
	{
		printf("좌석을 예약 또는 예약취소 하시겠습니까?(y 또는 c 또는 종료: n): ");
		scanf("\n%c", &ans1);
		printf("\n");

		if (ans1 == 'y')
		{
			printf("-------------------------------\n");
			for (i = 0; i < SIZE; i++)
			{
				printf("%2d) 1 2 3 4 5 6 7 8 9 10\n", (i + 1));
			}
			printf("-------------------------------\n");

			for (i = 0; i < SIZE; i++)
			{
				printf("%2d) ", i + 1);
				for (j = 0; j < SIZE; j++)
				{
					printf(" %d", seats[i][j]);
				}
				printf("\n");
			}

			printf("\n");
			printf("몇번째 열을 예약하시겠습니까(1부터 10사이의 숫자를 입력하세요): ");
			scanf("%d", &ans2);

			if (ans2 > 0 && ans2 <= SIZE)
			{
				printf("몇번째 자리를 예약하시겠습니까(1부터 10사이의 숫자를 입력하세요): ");
				scanf("%d", &ans3);

				if (ans3 > 0 && ans3 <= SIZE)
				{
					if (seats[ans2 - 1][ans3 - 1] == 0)			// 예약되지 않았으면
					{
						seats[ans2 - 1][ans3 - 1] = 1;
						printf("예약되었습니다.\n");

					}
					else										// 이미 예약되었으면
						printf("이미 예약된 자리입니다.\n");

					for (i = 0; i < SIZE; i++)
					{
						printf("%2d) ", i + 1);
						for (j = 0; j < SIZE; j++)
						{
							printf(" %d", seats[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("1부터 10 사이의 숫자를 입력해주세요 \n");
			}
			else
				printf("1부터 10 사이의 숫자를 입력해주세요 \n");
		}

		if (ans1 == 'c')
		{
			printf("-------------------------------\n");
			for (i = 0; i < SIZE; i++)
			{
				printf("%2d) 1 2 3 4 5 6 7 8 9 10\n", (i + 1));
			}
			printf("-------------------------------\n");

			for (i = 0; i < SIZE; i++)
			{
				printf("%2d) ", i + 1);
				for (j = 0; j < SIZE; j++)
				{
					printf(" %d", seats[i][j]);
				}
				printf("\n");
			}

			printf("\n");
			printf("몇번째 열을 취소하시겠습니까(1부터 10사이의 숫자를 입력하세요): ");
			scanf("%d", &ans2);

			if (ans2 > 0 && ans2 <= SIZE)
			{
				printf("몇번째 자리를 취소하시겠습니까(1부터 10사이의 숫자를 입력하세요): ");
				scanf("%d", &ans3);

				if (ans3 > 0 && ans3 <= SIZE)
				{
					if (seats[ans2 - 1][ans3 - 1] == 1)			// 예약되지 않았으면
					{
						seats[ans2 - 1][ans3 - 1] = 0;
						printf("취소되었습니다.\n");

					}
					else										// 이미 예약되었으면
						printf("없는 자리입니다.\n");

					for (i = 0; i < SIZE; i++)
					{
						printf("%2d) ", i + 1);
						for (j = 0; j < SIZE; j++)
						{
							printf(" %d", seats[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("1부터 10 사이의 숫자를 입력해주세요 \n");
			}
			else
				printf("1부터 10 사이의 숫자를 입력해주세요 \n");
		}
		else if (ans1 == 'n')
			break;
	}
}