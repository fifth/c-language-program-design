#include<stdio.h>
void main(void){
	double distance,weight,cost;
	scanf("%lf%lf",&distance,&weight);
	if (distance<=200) {
		if (weight<=1000) {
			cost = 10;
		} else {
			cost = 10+(weight-1000)*0.02;
		}
	} else {
		if (weight<=1000) {
			cost = 20;
		} else {
			cost = 20+(weight-1000)*0.05;
		}
	}
	printf("%.1f\n",cost);
}