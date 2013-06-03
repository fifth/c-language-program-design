#include <stdio.h>
void main(void)
{
    int i, sum=0;
	for (i=1;i<=100;i++) sum+=i;
    printf("sum = %d\n", sum);
}