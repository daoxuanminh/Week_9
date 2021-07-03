
#include <stdio.h>

int isLeapYear(int n);

int main(void)
{
  int year;
  printf("Input the year: ");
  scanf("%d", &year);

  if (isLeapYear(year) == 1)
    {
      printf("It is a leap year\n");
    }
  else
    {
      printf("It is not a leap year\n");
    }

  return 0;
}

int isLeapYear(int n)
{
  if (  ((n % 4) == 0 && (n % 100) != 0) || ((n % 400) == 0)  )
    return 1;
  return 0;
}