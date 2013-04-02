#include <stdio.h>
void main(void)
{
    int repeat, ri;
    double x, y;

    scanf("%d", &repeat);
    for(ri = 1;ri <= repeat; ri++){
        scanf("%lf", &x);
        if (x<0) {
        	y = 0;
        } else if (x>=0&&x<=15) {
        	y = 4.0*x/3;
        } else if (x>15) {
        	y = 2.5*x-10.5;
        }
        printf("f(%.2f) = %.2f\n", x, y);
    }
}