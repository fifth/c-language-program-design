#include <stdio.h>
int main(void)
{
    int repeat, ri;
    int minutes, seconds;
    double cost, mile;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d%d", &mile, &minutes, &seconds);
        mile = mile+(minutes*60+seconds)*1.0/300;
        if (mile<=3) {
        	cost = 10;
        } else if (mile<=10) {
        	cost = 10+(mile-3)*2;
        } else if (mile>10) {
        	cost = 10+14+(mile-10)*3;
        }
		printf("cost = %.0f\n", cost);
    }
}
