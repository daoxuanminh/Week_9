#include <stdio.h>

int odd(int n);
int even(int n);

int main(void)
{
  int x;
  scanf("%d", &x);
  if (odd(x) == 1)
    {
      printf("The figures of n are all odd\n");
      return 0;
    }
  if (even(x) == 1)
    {
      printf("The figures of n are all even\n");
      return 0;
    }
}

int odd(int n)
{
  while (n != 0)
    {
      if ((n % 10) % 2 == 0)
	return 0;
      n = n / 10;
    }
  return 1;
}

int all_even(int n)
{
  while (n != 0)
    {
      if ((n % 10) % 2 != 0)
	return 0;
      n = n / 10;
    }
  return 1;
}