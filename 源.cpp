#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int n = 0, n1 = 0;
	printf("                                                                             ��ӭ����ɨ����Ϸ��\n");
	printf("                                                                            ���»س�����ʼ��Ϸ\n");
	char ch = getchar();
	for (;;)
	{
		if (n1 == 1)
			printf("����");
		printf("������ս�Ѷȣ�0��1000��\n�ο����£�\n125������\n156���м�\n206���߼�\n206���ϣ�����������\n1000�����飨�Ｋ�ط���\n");
		scanf_s("%d", &n);
		if (n <= 1000 && n >= 0)
			break;
		else
		{
			printf("������Ч��\n");
			n1 = 1;
			continue;
		}
	}
	printf("\n");
	srand((unsigned)time(NULL));
	int a[46][81] = { 0 };
	int i, j, s = 0, h = 0, z = 0, x = 0, s1 = 0, s0, gg = 0, y = 0;
	for (i = 0, j = 0; j <= 80; j++)
		a[i][j] = j;
	for (i = 1, j = 0; i <= 45; i++)
		a[i][j] = i;
	for (i = 0, j = 0; j <= 80; j++)
	{
		if (j % 10 != 0)
			printf("%2d", j % 10);
		else
			printf("%2d", j);
		if (j == 80)
			printf("\n");
	}
	for (i = 1; i <= 45; i++)
	{
		printf("%2d", i);
		for (j = 1; j <= 80; j++)
			printf(" *");
		if (j == 81)
			printf("\n");
	}
	for (;;)
	{
		if (z != 0)
			printf("����");
		printf("������Ҫ̽�������꣺\n�У�");
		scanf_s("%d", &i);
		printf("�У�");
		scanf_s("%d", &j);
		printf("\n");
		if (i <= 45 && i >= 1 && j >= 1 && j <= 80)
			break;
		else
		{
			printf("��Ч���꣡\n");
			z = 1;
			continue;
		}
	}
	int i1 = i, j1 = j;
	a[i][j] = 10;
	if (i == 1 && j == 1)
	{
    	a[i + 1][j + 1] = 10;
		a[i][j + 1] = 10;
		a[i + 1][j] = 10;
	}
	else if (i == 1 && j == 80)
	{
		a[i + 1][j - 1] = 10;
		a[i][j - 1] = 10;
		a[i + 1][j] = 10;
	}
	else if (i == 1 && j <= 79 && j >= 2)
	{
		a[i + 1][j - 1] = 10;
		a[i][j - 1] = 10;
		a[i + 1][j] = 10;
		a[i + 1][j + 1] = 10;
		a[i][j + 1] = 10;
	}
	else if (i >= 2 && i <= 44 && j == 1)
	{
		a[i - 1][j] = 10;
		a[i - 1][j + 1] = 10;
		a[i][j + 1] = 10;
		a[i + 1][j + 1] = 10;
		a[i + 1][j] = 10;
	}
	else if (i >= 2 && i <= 44 && j == 80)
	{
    	a[i - 1][j] = 10;
	    a[i - 1][j - 1] = 10;
    	a[i][j - 1] = 10;
	    a[i + 1][j - 1] = 10;
	    a[i + 1][j] = 10;
	}
	else if (i == 45 && j == 1)
	{
		a[i - 1][j + 1] = 10;
		a[i][j + 1] = 10;
		a[i - 1][j] = 10;
	}
	else if (i == 45 && j == 80)
	{
		a[i - 1][j - 1] = 10;
		a[i][j - 1] = 10;
		a[i - 1][j] = 10;
	}
	else if (i == 45 && j <= 79 && j >= 2)
	{
		a[i - 1][j - 1] = 10;
		a[i][j - 1] = 10;
		a[i - 1][j] = 10;
		a[i - 1][j + 1] = 10;
		a[i][j + 1] = 10;
	}
	else if (i <= 44 && i >= 2 && j >= 2 && j <= 79)
	{
		a[i - 1][j - 1] = 10;
		a[i][j - 1] = 10;
		a[i - 1][j] = 10;
		a[i - 1][j + 1] = 10;
		a[i][j + 1] = 10;
		a[i + 1][j - 1] = 10;
		a[i + 1][j] = 10;
		a[i + 1][j + 1] = 10;
	}
	for (i = 1, j = 1, z = 1; z != 3600;)
	{
		if (i == i1 && j == j1)
		{
			if (j <= 79)
			{
				j++;
				continue;
			}
			else
			{
				i++;
				j = 1;
				continue;
			}
		}
		else
		{
			if (a[i][j] != 10)
			{
				a[i][j] = rand() % 1000 + 0;
				if (a[i][j] >= n)
					a[i][j] = 10;
				else
					a[i][j] = 11;
			}
			z++;
		}
		j++;
		if (j == 81)
		{
			i++;
			j = 1;
		}
	}
	for (i = 1, j = 1; i <= 45;)
	{
		if (a[i][j] == 10)
			h++;
		else
			s++;
		j++;
		if (j == 81)
		{
			j = 1;
			i++;
		}
	}
	printf("����Ϊ��%d\n������Ϊ��%d\n", s, h);
	s0 = s;
	int c = 0, h0 = h, h1 = 0;
	for (;;)
	{
		for (i = 1, j = 1; i <= 45;)
		{
			if (c == 0)
			{
				i = i1;
				j = j1;
				a[i][j] = 9;
				c = 1;
			}
			if (a[i][j] == 9)
			{
				h = 0;
				if (i == 1 && j == 1)
				{
					if (a[i + 1][j + 1] == 11 || a[i + 1][j + 1] == 12)
						h++;
					if (a[i][j + 1] == 11 || a[i][j + 1] == 12)
						h++;
					if (a[i + 1][j] == 11 || a[i + 1][j] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i + 1][j + 1] == 10)
							a[i + 1][j + 1] = 9;
						if (a[i][j + 1] == 10)
							a[i][j + 1] = 9;
						if (a[i + 1][j] == 10)
							a[i + 1][j] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i == 1 && j == 80)
				{
					if (a[i + 1][j - 1] == 11 || a[i + 1][j - 1] == 12)
						h++;
					if (a[i][j - 1] == 11 || a[i][j - 1] == 12)
						h++;
					if (a[i + 1][j] == 11 || a[i + 1][j] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i + 1][j - 1] == 10)
							a[i + 1][j - 1] = 9;
						if (a[i][j - 1] == 10)
							a[i][j - 1] = 9;
						if (a[i + 1][j] == 10)
							a[i + 1][j] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i == 1 && j <= 79 && j >= 2)
				{
					if (a[i + 1][j - 1] == 11 || a[i + 1][j - 1] == 12)
						h++;
					if (a[i][j - 1] == 11 || a[i][j - 1] == 12)
						h++;
					if (a[i + 1][j] == 11 || a[i + 1][j] == 12)
						h++;
					if (a[i + 1][j + 1] == 11 || a[i + 1][j + 1] == 12)
						h++;
					if (a[i][j + 1] == 11 || a[i][j + 1] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i + 1][j - 1] == 10)
							a[i + 1][j - 1] = 9;
						if (a[i][j - 1] == 10)
							a[i][j - 1] = 9;
						if (a[i + 1][j] == 10)
							a[i + 1][j] = 9;
						if (a[i + 1][j + 1] == 10)
							a[i + 1][j + 1] = 9;
						if (a[i][j + 1] == 10)
							a[i][j + 1] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i >= 2 && i <= 44 && j == 1)
				{
					if (a[i - 1][j] == 11 || a[i - 1][j] == 12)
						h++;
					if (a[i - 1][j + 1] == 11 || a[i - 1][j + 1] == 12)
						h++;
					if (a[i][j + 1] == 11 || a[i][j + 1] == 12)
						h++;
					if (a[i + 1][j + 1] == 11 || a[i + 1][j + 1] == 12)
						h++;
					if (a[i + 1][j] == 11 || a[i + 1][j] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i - 1][j] == 10)
							a[i - 1][j] = 9;
						if (a[i - 1][j + 1] == 10)
							a[i - 1][j + 1] = 9;
						if (a[i][j + 1] == 10)
							a[i][j + 1] = 9;
						if (a[i + 1][j + 1] == 10)
							a[i + 1][j + 1] = 9;
						if (a[i + 1][j] == 10)
							a[i + 1][j] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i >= 2 && i <= 44 && j == 80)
				{
					if (a[i - 1][j] == 11 || a[i - 1][j] == 12)
						h++;
					if (a[i - 1][j - 1] == 11 || a[i - 1][j - 1] == 12)
						h++;
					if (a[i][j - 1] == 11 || a[i][j - 1] == 12)
						h++;
					if (a[i + 1][j - 1] == 11 || a[i + 1][j - 1] == 12)
						h++;
					if (a[i + 1][j] == 11 || a[i + 1][j] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i - 1][j] == 10)
							a[i - 1][j] = 9;
						if (a[i - 1][j - 1] == 10)
							a[i - 1][j - 1] = 9;
						if (a[i][j - 1] == 10)
							a[i][j - 1] = 9;
						if (a[i + 1][j - 1] == 10)
							a[i + 1][j - 1] = 9;
						if (a[i + 1][j] == 10)
							a[i + 1][j] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i == 45 && j == 1)
				{
					if (a[i - 1][j + 1] == 11 || a[i - 1][j + 1] == 12)
						h++;
					if (a[i][j + 1] == 11 || a[i][j + 1] == 12)
						h++;
					if (a[i - 1][j] == 11 || a[i - 1][j] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i - 1][j + 1] == 10)
							a[i - 1][j + 1] = 9;
						if (a[i][j + 1] == 10)
							a[i][j + 1] = 9;
						if (a[i - 1][j] == 10)
							a[i - 1][j] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i == 45 && j == 80)
				{
					if (a[i - 1][j - 1] == 11 || a[i - 1][j - 1] == 12)
						h++;
					if (a[i][j - 1] == 11 || a[i][j - 1] == 12)
						h++;
					if (a[i - 1][j] == 11 || a[i - 1][j] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i - 1][j - 1] == 10)
							a[i - 1][j - 1] = 9;
						if (a[i][j - 1] == 10)
							a[i][j - 1] = 9;
						if (a[i - 1][j] == 10)
							a[i - 1][j] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i == 45 && j <= 79 && j >= 2)
				{
					if (a[i - 1][j - 1] == 11 || a[i - 1][j - 1] == 12)
						h++;
					if (a[i][j - 1] == 11 || a[i][j - 1] == 12)
						h++;
					if (a[i - 1][j] == 11 || a[i - 1][j] == 12)
						h++;
					if (a[i - 1][j + 1] == 11 || a[i - 1][j + 1] == 12)
						h++;
					if (a[i][j + 1] == 11 || a[i][j + 1] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i - 1][j - 1] == 10)
							a[i - 1][j - 1] = 9;
						if (a[i][j - 1] == 10)
							a[i][j - 1] = 9;
						if (a[i - 1][j] == 10)
							a[i - 1][j] = 9;
						if (a[i - 1][j + 1] == 10)
							a[i - 1][j + 1] = 9;
						if (a[i][j + 1] == 10)
							a[i][j + 1] = 9;
						i = j = 1;
						continue;
					}
				}
				else if (i <= 44 && i >= 2 && j >= 2 && j <= 79)
				{
					if (a[i - 1][j - 1] == 11 || a[i - 1][j - 1] == 12)
						h++;
					if (a[i][j - 1] == 11 || a[i][j - 1] == 12)
						h++;
					if (a[i - 1][j] == 11 || a[i - 1][j] == 12)
						h++;
					if (a[i - 1][j + 1] == 11 || a[i - 1][j + 1] == 12)
						h++;
					if (a[i][j + 1] == 11 || a[i][j + 1] == 12)
						h++;
					if (a[i + 1][j - 1] == 11 || a[i + 1][j - 1] == 12)
						h++;
					if (a[i + 1][j] == 11 || a[i + 1][j] == 12)
						h++;
					if (a[i + 1][j + 1] == 11 || a[i + 1][j + 1] == 12)
						h++;
					a[i][j] = h;
					if (h == 0)
					{
						if (a[i - 1][j - 1] == 10)
							a[i - 1][j - 1] = 9;
						if (a[i][j - 1] == 10)
							a[i][j - 1] = 9;
						if (a[i - 1][j] == 10)
							a[i - 1][j] = 9;
						if (a[i - 1][j + 1] == 10)
							a[i - 1][j + 1] = 9;
						if (a[i][j + 1] == 10)
							a[i][j + 1] = 9;
						if (a[i + 1][j - 1] == 10)
							a[i + 1][j - 1] = 9;
						if (a[i + 1][j] == 10)
							a[i + 1][j] = 9;
						if (a[i + 1][j + 1] == 10)
							a[i + 1][j + 1] = 9;
						i = j = 1;
						continue;
					}
				}
			}
			if (j == 80)
			{
				j = 1;
				i++;
			}
			else
				j++;
		}
		for (i = 0, j = 0; i <= 45; i++)
		{
			if (i == 0)
				for (; j <= 80; j++)
				{
					if (j % 10 != 0)
					{
						printf("%2d", a[i][j] % 10);
					}
					else
						printf("%2d", a[i][j]);
					if (j == 80)
						printf("\n");
				}
			else
				for (j = 0; j <= 80; j++)
				{
					if (j == 0)
						printf("%2d", a[i][j]);
					else if (a[i][j] == 0)
						printf("  ");
					else if (a[i][j] <= 8 && a[i][j] >= 1)
						printf("%2d", a[i][j]);
					else if (a[i][j] <= 13 && a[i][j] >= 12)
						printf("��");
					else
						printf(" *");
					if (j == 80)
						printf("\n");
				}
		}
		for (i = 1, j = 1, s = 0, s1 = 0, h1 = 0; i <= 45;)
		{
			if (a[i][j] <= 8 && a[i][j] >= 0)
				h1++;
			if (a[i][j] == 12)
				s++;
			if (a[i][j] == 12 || a[i][j] == 13)
				s1++;
			if (j <= 79)
				j++;
			else
			{
				i++;
				j = 1;
			}
		}
		if (s == s0)
		{
			y = 1;
			break;
		}
		if (h1 == h0)
		{
			y = 1;
			break;
		}
		printf("ʣ��������%d\nʣ���������%d\n������в��������꣺\n", s0 - s1, h0 - h1);
		for (z = 0;;)
		{
			if (z != 0)
				printf("����������в��������꣺\n");
			printf("�У�");
			scanf_s("%d", &i1);
			printf("�У�");
			scanf_s("%d", &j1);
			if (i1 <= 45 && i1 >= 1 && j1 >= 1 && j1 <= 80 && a[i1][j1] <= 13 && a[i1][j1] >= 10)
				break;
			else
			{
				printf("��Ч���꣡\n");
				z = 1;
				continue;
			}
		}
		for (;;)
		{
			if (z != 0)
			{
				printf("����");
				z = 0;
			}
			printf("ѡ����еĲ�����\n1.̽��������       2.��Ǹ�����Ϊ��      3.ȡ���������ױ��\n����ѡ��");
			scanf_s("%d", &x);
			printf("\n");
			if (x != 1 && x != 2 && x != 3)
			{
				printf("��Ч������\n");
				z++;
				continue;
			}
			if (x == 1 && a[i1][j1] >= 12 && a[i1][j1] <= 13)
			{
				printf("��Ч������\n");
				z++;
				continue;
			}
			if (x == 2 && a[i1][j1] >= 12 && a[i1][j1] <= 13)
			{
				printf("��Ч������\n");
				z++;
				continue;
			}
			if (x == 3 && a[i1][j1] <= 11 && a[i1][j1] >= 10)
			{
				printf("��Ч������\n");
				z++;
				continue;
			}
			if (z == 0)
				break;
		}
		if (x == 1)
		{
			if (a[i1][j1] == 11)
			{
				gg = 1;
				break;
			}
			else
			{
				c = 0;
				continue;
			}
		}
		if (x == 2)
		{
			if (a[i1][j1] == 10)
				a[i1][j1] = 13;
			else
				a[i1][j1] = 12;
		}
		if (x == 3)
		{
			if (a[i1][j1] == 12)
				a[i1][j1] = 11;
			else
				a[i1][j1] = 10;
		}
	}
	if (gg == 1)
		printf("\n\n�أ�����\n���ź��������ˣ�");
	if (y == 1)
		printf("\n\n��ϲ��Ӯ�ˣ�����");
	return 0;
}