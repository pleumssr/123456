#include<stdio.h>
int main()
{
	int m, n, i, j, x, y, a[10] = {};


	scanf_s("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &x);
			for (y = 0; y < 10; y++)
			{
				if (x == y)
				{
					a[y]++;
				}
			}

		}
	}
	printf("0 : %d\n", a[0]);
	printf("1 : %d\n", a[1]);
	printf("2 : %d\n", a[2]);
	printf("3 : %d\n", a[3]);
	printf("4 : %d\n", a[4]);
	printf("5 : %d\n", a[5]);
	printf("6 : %d\n", a[6]);
	printf("7 : %d\n", a[7]);
	printf("8 : %d\n", a[8]);
	printf("9 : %d\n", a[9]);
	return 0;
}