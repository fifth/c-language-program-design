#include<stdio.h>
#include<math.h>
void main(void) {
	int x;
	double y;
	scanf("%d",&x);
	if (x>=0) {
		y=sqrt(x);
	} else {
		y=pow(x,5)+2*x+1.0/x;
	}
	printf("%.3f\n", y);
}