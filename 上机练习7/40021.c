#include "stdio.h"
int main(void)
{
    int i, j, n;
    int repeat, ri;
    double e, product;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        e = 1;
        j = 1;
        for (i = 1; i <= n; i++) {
        	j *= i;
        	e += 1.0/j;
        }
    	printf("e = %0.4f\n", e);
  }
}