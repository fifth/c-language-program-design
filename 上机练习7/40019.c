#include <stdio.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double distance, height;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &height, &n);
        i = 2;
        distance = height;
        height /= 2.0;
        while (i <= n && n >= 2) {
        	distance += height*2;
        	i++;
        	height /= 2.0;
        }
      	printf("distance = %.1f, height = %.1f\n", distance, height);
    }
}