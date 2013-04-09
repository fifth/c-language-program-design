#include <stdio.h>
int main(void)
{
    int year;

    for(year = 2000; year <= 2099; year++){
    	if (((year%4 == 0)&&(year%100 != 0))||(year%400 ==0)) {
    		printf("%d\n", year);
    	}
	}
}
