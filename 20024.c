// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入 x，计算并输出下列分段函数 f(x) 的值(保留2位小数)，请调用 sqrt 函数求平方根，调用 pow 函数求幂。
// 当x >= 0时，f(x) = x^0.5，当x小于0时，f(x) = (x+1)^2 + 2x + 1/x。
// 输入输出示例：括号内是说明
// 输入
// 3	(repeat=3)
// 10
// -0.5
// 0
// 输出
// f(10.00) = 3.16
// f(-0.50) = -2.75
// f(0.00) = 0.00

#include <stdio.h>
#include <math.h>
int main(void)
{
    int repeat, ri;
    double x, y;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
		scanf("%lf", &x);
		if (x>=0) y = pow(x,0.5);
		else y = pow(x+1,2) + 2*x + 1.0/x;
        printf("f(%.2f) = %.2f\n", x, y);	
    }
}