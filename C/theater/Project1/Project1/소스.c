#include <stdio.h>

int main()
{
	printf("\n  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  ��  %s                                                       ��                                         %18s  ��\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("  ��                                                                 ��                                     %18s  ��\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  ��  %s                                                           ��                                                         ��\n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("  ��                                                                 ��                                                       ��\n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  ��  %s                                                       ��                                         %18s  ��\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("  ��                                                                 ��                                     %18s  ��\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  ��  %s                                                           ��                                                         ��\n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("  ��                                                                 ��                                                       ��\n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  ��  %s                                                       ��                                         %18s  ��\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("  ��                                                                 ��                                     %18s  ��\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  ��  %s                                                           ��                                                         ��\n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("  ��                                                                 ��                                                         ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��\n");
	printf("  ��                                                                                                                            ��");
}