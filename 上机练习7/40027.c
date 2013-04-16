#include <stdio.h>
#include <math.h>
int main(void)
{
    int digit, in, power, temp, count, i;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
        if (in < 0) {
        	in = -in;
        }
        count = 1;
        temp = in;
        while (temp/=10) {
        	count++;
        }
        for (i = 1; i <= count; i++) {
        	power = pow(10,count-i);
        	printf("%d", in/power);
        	in %= power;
        	if (i!=count) {
        		printf(" ");
        	}
        }
     	printf("\n");
   }
}