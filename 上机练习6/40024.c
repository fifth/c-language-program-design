#include "stdio.h"
void main(void)
{
    int i, a, b, c, m, n;
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
        for (i = m; i <= n; i++) {
        	a = i % 10;
        	b = i % 100 / 10;
        	c = i / 100;
        	if ((i==a*a*a+b*b*b+c*c*c)&&(i!=1000)) {
        		printf("%d\n", i);
        	}
        }
    }
}