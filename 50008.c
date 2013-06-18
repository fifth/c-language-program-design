// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 m(0<m<10)，求1! + 2! + … + m!，要求定义并调用函数fact(n)计算 n!，函数形参 n 的类型是int，函数类型是double。
// 输入输出示例：括号内是说明
// 输入
// 5      (m=5)
// 输出：
// 1!+2!+...+5! = 153.000000

#include <stdio.h>
double fact(int n);
int main(void)
{    
    int i, m;
    double sum; 

    scanf("%d", &m);
    sum = 0;
    for (i = 1; i <= m; i++) sum+=fact(i);
    printf("1!+2!+...+%d! = %f\n", m, sum); 
}
double fact(int n) {
	return n==0?1:n*fact(n-1);
}