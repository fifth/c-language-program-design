#include <stdio.h>
#include <math.h>
void main(void)
{
    int i, n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        sum=0;
        for (i=1;i<=n;i++) sum+=pow(-1,i+1)*i*1.0/(2*i-1);
      	printf("sum = %.3f\n", sum);
    }
}