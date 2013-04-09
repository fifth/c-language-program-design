#include <stdio.h>
#include <math.h>
int main(void)
{
    int repeat, ri, i;
    double eps, temp, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le", &eps);
        sum = 0;
        i = 0;
        do {
        	i++;
        	temp = pow(-1,i+1)*1.0/(3*i-2);
        	sum += temp;
        } while (fabs(temp)>=eps);
      	printf("sum = %.6f\n", sum);
   }
}