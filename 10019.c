// 程序填空，不要改变与输入输出有关的语句。
// 用递归函数计算x^n (n>=1)的值。
// 例：(括号内为说明)
// 输入
// 2 3	(x=2,n=3)
// 输出
// Root = 8.00

#include <stdio.h>
double fun(int n, double x);
int main(void)
{
	int n;
	double x, root; 

    scanf("%lf%d", &x,&n);
  	root = fun(n, x);
 	printf("Root = %0.2f\n", root);
}  
double fun(int n, double x) {
	return n>1?x*fun(n-1, x):x;
}