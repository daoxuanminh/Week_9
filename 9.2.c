#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(void)
{
	int x;
	do
	{
		printf("Input a positive number: ");
		scanf("%d", &x);	
	}
	while (x <= 0);

	for (int i = 2; i <= x; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

int is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}