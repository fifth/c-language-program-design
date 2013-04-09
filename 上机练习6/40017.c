#include <stdio.h>
void main(void)
{
    int i, n;
    int repeat, ri;
    double a, b, sum, t;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++) {
        scanf("%d", &n);
        sum = 0;
        a = 2.0;
        b = 1.0;
        for (i = 1; i<=n; i++) {
        	sum += a/b;
        	t = b;
        	b = a;
        	a = t+b;
        }
     	printf("sum = %.2f\n",sum);
    }
}