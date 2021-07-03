#include <stdio.h>

double convert(double f);

int main(void)
{
  for (int i = 0; i <= 20; i++)
    {
      printf("%2d %.2lf\n", i, convert(i));
    }
  return 0;
}

double convert(double f)
{
  return (double) 5 / 9 * (f - 32);
}