#include "stdio.h"
int main(void)
{
    int count, digit, in; 
    int repeat, ri;
    int countdigit(int number, int digit);

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &in, &digit);
        count = countdigit(in, digit);
        printf("Number %d of digit %d: %d\n", in, digit, count);
    }
}

int countdigit(int number, int digit)
{
    int k;
    if (number < 0)
        number = -number;
    k = number % 10;
    if (number == 0)
        return 0;
    if (k == digit)
        return countdigit(number / 10, digit) + 1;
    else
        return countdigit(number / 10, digit);
}