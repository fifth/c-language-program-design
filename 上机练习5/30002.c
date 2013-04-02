#include <stdio.h>
int main(void)
{
    int repeat, ri;
    int x, y;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &x);
        if (x<0) {
        	y = -1;
        } else if (x==0) {
        	y = 0;
        } else if (x>0) {
        	y = 1;
        }
        printf("sign(%d) = %d\n", x, y);
    }
}