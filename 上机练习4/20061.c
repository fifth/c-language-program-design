#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double cost, e;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &e);
		if (e<=50) {
			cost=e*0.53;
		} else {
			cost=50*0.53+(e-50)*0.58;
		}
        printf("cost = %.2f\n", cost);
    }
}
 