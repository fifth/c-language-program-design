#include<stdio.h>
void main(void) {
	int num1,num2,num3;
	double ave;
	scanf("%d%d%d",&num1,&num2,&num3);
	ave=(num1+num2+num3)/3.0;
	printf("%.1f\n", ave);
}