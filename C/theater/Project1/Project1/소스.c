#include <stdio.h>

int main()
{
	printf("\n  бс                                                                                                                            бс\n");
	printf("  бс                                                                                                                            бс\n");
	printf("  бс                                                                                                                            бс\n");
	if (clist[0].hp > 0 && mlist[0].hp > 0)
		printf("  бс  %s                                                       б█                                         %18s  бс\n", clist[0].name, mlist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp > 0)
		printf("  бс                                                                 б█                                     %18s  бс\n", mlist[0].name);
	if (clist[0].hp > 0 && mlist[0].hp <= 0)
		printf("  бс  %s                                                           б█                                                         бс\n", clist[0].name);
	if (clist[0].hp <= 0 && mlist[0].hp <= 0)
		printf("  бс                                                                 б█                                                       бс\n");
	if (clist[1].hp > 0 && mlist[1].hp > 0)
		printf("  бс  %s                                                       б█                                         %18s  бс\n", clist[1].name, mlist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp > 0)
		printf("  бс                                                                 б█                                     %18s  бс\n", mlist[1].name);
	if (clist[1].hp > 0 && mlist[1].hp <= 0)
		printf("  бс  %s                                                           б█                                                         бс\n", clist[1].name);
	if (clist[1].hp <= 0 && mlist[1].hp <= 0)
		printf("  бс                                                                 б█                                                       бс\n");
	if (clist[2].hp > 0 && mlist[2].hp > 0)
		printf("  бс  %s                                                       б█                                         %18s  бс\n", clist[2].name, mlist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp > 0)
		printf("  бс                                                                 б█                                     %18s  бс\n", mlist[2].name);
	if (clist[2].hp > 0 && mlist[2].hp <= 0)
		printf("  бс  %s                                                           б█                                                         бс\n", clist[2].name);
	if (clist[2].hp <= 0 && mlist[2].hp <= 0)
		printf("  бс                                                                 б█                                                         бс\n");
	printf("  бс                                                                                                                            бс\n");
	printf("  бс                                                                                                                            бс\n");
	printf("  бс                                                                                                                            бс");
}