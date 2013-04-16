#include <stdio.h>
int main(void)
{
    int count, in, sum;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
        if (in < 0) {
        	in = -in;
        }
        sum = 0;
        count = 0;
        do {
        	sum += in%10;
        	count++;
        } while (in /= 10);
        printf("count = %d, sum = %d\n", count, sum);
    }
}