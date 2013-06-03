#include <stdio.h>
#include <math.h>
void main(void)
{
    int flag, i, n, t;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		sum=0;
		for (i=1;i<=n;i++) sum+=pow(-1,i+1)*1.0/(3*i-2);
		printf("sum = %.3f\n", sum);
    }
}