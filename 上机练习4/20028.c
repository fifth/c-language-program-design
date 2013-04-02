#include <stdio.h>
int main(void)
{
    int digit1, digit2, digit3, digit4, newnum, number;
    scanf("%d", &number);
    digit1=(number%10+9)%10;
    digit2=(number/10%10+9)%10;
    digit3=(number/100%10+9)%10;
    digit4=(number/1000+9)%10;
    newnum=digit2*1000+digit1*100+digit4*10+digit3;
    printf("The encrypted number is %d\n", newnum);
}