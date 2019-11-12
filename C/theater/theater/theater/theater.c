#include <stdio.h>
#define SIZE 10

int main(void)
{
	char ans1;
	int ans2, i, j;
	int seats[SIZE][SIZE] = { 0 };

	while (1)
	{
		printf("�¼��� ���� �Ǵ� ������� �Ͻðڽ��ϱ�?(y �Ǵ� c �Ǵ� n): ");
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
			printf("���° �¼��� �����Ͻðڽ��ϱ�: ");
			scanf_s("%d", &ans2);

			if (ans2 <= 0 || ans2 > SIZE)
			{
				printf("1���� 10������ ���ڸ� �Է��ϼ���: \n");
				continue;
			}
			if (seats[ans2 - 1] == 0) // ������� �ʾ�����
			{
				seats[ans2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else // �̹� ����Ǿ�����
				printf("�̹� ����� �ڸ��Դϴ�.\n");
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
			printf("���° �¼��� ����Ͻðڽ��ϱ�: ");
			scanf_s("%d", &ans2);

			if (ans2 <= 0 || ans2 > SIZE)
			{
				printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
				continue;
			}
			if (seats[ans2 - 1] != 0) // �̹� ����Ǿ�����
			{
				seats[ans2 - 1] = 0;
				printf("������� �Ǿ����ϴ�.\n");
			}
			else  // ������� �ʾ�����
				printf("�� �ڸ��Դϴ�.\n");
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}