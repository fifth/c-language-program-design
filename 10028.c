// 程序填空，不要改变与输入输出有关的语句。
// 从键盘上输入一个3×3的矩阵，求矩阵的主对角线和副对角线之和，要求定义和调用函数float matrix(float *a[3], int n)，
// 提示，函数的形参是指针数组。
// 例：
// 输入：
// 8   6  12
// 5   9  10 
// 7  11   5
// 输出：
// sum=41.00

#include <stdio.h>
float matrix(float *a[3], int n);
void main()
{	
	int i,j; 
	float a[3][3],*p[3];

  	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			scanf("%f", &a[i][j]);
		}
		p[i] = a[i];
  	}
 	printf("sum=%0.2f \n", matrix(p,3));
}
float matrix(float *a[3], int n) {
	float sum = 0;
	int i;
	for (i = 0; i < 3; i++) {
		sum += *(a[i]+i);
		sum += *(a[i]+2-i);
	}
	if (i%2==1) {
		sum -= *(a[i%2]+i%2);
	}
	return sum;
}