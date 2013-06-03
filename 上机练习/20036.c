#include <stdio.h>
void main(void)
{
    int i, lower, upper;
    int repeat, ri;
    double celsius, fahr;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &lower, &upper);
        printf("fahr  celsius\n");
        i=lower;
        while (i<=upper) {
        	fahr=i;
        	celsius=5*(fahr-32)/9.0;
        	printf("%3.0f %6.1f\n",fahr,celsius);
        	i+=2;
        }
	}
}
 