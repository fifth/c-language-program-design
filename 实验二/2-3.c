#include<stdio.h>
void main(void) {
	int i,j;
	for (i=4;i>=1;i--) {
		for (j=1;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}
}