// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入2个正整数 m 和 n(m<=n)，计算 n! /(m!* (n-m)!) 。
// 要求定义并调用函数fact(n)计算n的阶乘, 其中 n 的类型是 int，函数类型是 double。
// 例：括号内是说明
// 输入：
// 2      (repeat=2)
// 2 7    (m=2, n=7)
// 5 12   (m=5, n=12)
// 输出：
// result = 21
// result = 792

#include "stdio.h"
double fact(int n);
int main(void)
{
    int m, n;
    int repeat, ri;
    double s;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
		s = fact(n)/(fact(m)*fact(n-m));
        printf("result = %.0f\n", s);
    }
}
double fact(int n) {
	return n==0?1:n*fact(n-1);
}