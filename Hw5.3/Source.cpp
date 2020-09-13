#include <stdio.h>
int main()
{
	int n, m = 0;
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		for (int j = i; n % j == 0;)
		{
			if (m != 0)
			{
				printf(" x ");

			}
			if (n % i == 0)
			{
				printf("%d", i);
				n /= i;
				m++;
			}

		}
	}

}