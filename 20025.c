// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入实数 x，计算并输出下列分段函数 f(x) 的值，输出时保留1位小数。
// 当 x 不等于10时，y = f(x) = x，当 x 等于10时，y = f(x) = 1/x。
// 输入输出示例：括号内是说明
// 输入
// 2	(repeat=2)
// 10
// 234
// 输出
// f(10.0) = 0.1
// f(234.0) = 234.0

#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double x, y; 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
		scanf("%lf", &x);
		if (x==10) y = 1.0/x;
		else y = x;
        printf("f(%.1f) = %.1f\n", x, y);	
    }
}