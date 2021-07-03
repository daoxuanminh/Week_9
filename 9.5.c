#include <stdio.h>

void printnchars(int ch, int n);

int main(void)
{
    for (int i = 1; i <= 4; i++)
    {
        printnchars('*', i);
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 5; i++)
    {
        printnchars('*', i);
        printf("\n");
    }
    return 0;
}

void printnchars(int ch, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%c", ch);
}