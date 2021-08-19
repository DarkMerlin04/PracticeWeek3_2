#include<stdio.h>
int main()
{
	int num[3];
	int x = 0;
	scanf_s("%d", &x);
	while (x >= 10)
	{
		for (int i = 0; i < 3; i++)
		{
			num[i] = x % 10;
			x /= 10;
		}
		x = num[0] * num[1] * num[2];
		printf("%d . %d . %d = %d\n", num[2], num[1], num[0], x);
	}
	return 0;
}