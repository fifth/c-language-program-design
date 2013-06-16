// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入 x，计算并输出下列分段函数 f(x) 的值(保留1位小数)。
// 当 x 不等于0时，y = f(x) = 1/x，当 x 等于0时，y = f(x) = 0。
// 输入输出示例：括号内是说明
// 输入
// 2       (repeat=2)
// 10      (x=10)
// 0       (x=0)
// 输出
// f(10.00) = 0.1
// f(0.00) = 0.0

#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double x, y;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &x);
		if (x==0) y = 0;
		else y = 1.0/x;
        printf("f(%.2f) = %.1f\n", x, y);	
     }
}