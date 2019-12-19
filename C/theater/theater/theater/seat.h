#pragma once
#include <stdio.h>
#include <conio.h>
#define SIZE 10

void seat();

void seat()
{
	char ans1;						//���� ������� ����
	char ans2, ans3, i, j;			// ans2: �� ���� ans3: �� ����
	int seats[SIZE][SIZE] = { 0 };

	while (1)
	{
		printf("�¼��� ���� �Ǵ� ������� �Ͻðڽ��ϱ�?(y �Ǵ� c �Ǵ� ����: n): ");
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
			printf("���° ���� �����Ͻðڽ��ϱ�(1���� 10������ ���ڸ� �Է��ϼ���): ");
			scanf("%d", &ans2);

			if (ans2 > 0 && ans2 <= SIZE)
			{
				printf("���° �ڸ��� �����Ͻðڽ��ϱ�(1���� 10������ ���ڸ� �Է��ϼ���): ");
				scanf("%d", &ans3);

				if (ans3 > 0 && ans3 <= SIZE)
				{
					if (seats[ans2 - 1][ans3 - 1] == 0)			// ������� �ʾ�����
					{
						seats[ans2 - 1][ans3 - 1] = 1;
						printf("����Ǿ����ϴ�.\n");

					}
					else										// �̹� ����Ǿ�����
						printf("�̹� ����� �ڸ��Դϴ�.\n");

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
					printf("1���� 10 ������ ���ڸ� �Է����ּ��� \n");
			}
			else
				printf("1���� 10 ������ ���ڸ� �Է����ּ��� \n");
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
			printf("���° ���� ����Ͻðڽ��ϱ�(1���� 10������ ���ڸ� �Է��ϼ���): ");
			scanf("%d", &ans2);

			if (ans2 > 0 && ans2 <= SIZE)
			{
				printf("���° �ڸ��� ����Ͻðڽ��ϱ�(1���� 10������ ���ڸ� �Է��ϼ���): ");
				scanf("%d", &ans3);

				if (ans3 > 0 && ans3 <= SIZE)
				{
					if (seats[ans2 - 1][ans3 - 1] == 1)			// ������� �ʾ�����
					{
						seats[ans2 - 1][ans3 - 1] = 0;
						printf("��ҵǾ����ϴ�.\n");

					}
					else										// �̹� ����Ǿ�����
						printf("���� �ڸ��Դϴ�.\n");

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
					printf("1���� 10 ������ ���ڸ� �Է����ּ��� \n");
			}
			else
				printf("1���� 10 ������ ���ڸ� �Է����ּ��� \n");
		}
		else if (ans1 == 'n')
			break;
	}
}