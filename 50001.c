// 程序填空，不要改变与输入输出有关的语句。
// 从键盘输入一个正整数n，计算 n! 的值。要求定义和调用函数fact(n)，计算n!，函数形参n的类型是int，函数类型是double。
// 输入输出示例：括号内是说明
// 5        (n=5)
// 5! = 120.000000

#include <stdio.h>
void main(void)
{    
    int n;
    double factorial;
    double fact(int n);

    scanf ("%d", &n);
    factorial=fact(n);
    printf("%d! = %f\n", n, factorial);
}
double fact(int n) {
	return (n==1)?1:n*fact(n-1);
}