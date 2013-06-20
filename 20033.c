// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入2个正整数 m 和 n(m<=n)，计算表达式 1/m + 1/(m+1) + 1/(m+2) + ...... + 1/n的值，输出时保留3位小数。
// 输入输出示例：括号内为说明
// 输入
// 3        (repeat=3)
// 5 15     (计算1/5+1/6+1/7+...+1/15)
// 10 20    (计算1/10+1/11+1/12+...+1/20)
// 1 3      (计算1+1/2+1/3)
// 输出
// sum = 1.235
// sum = 0.769
// sum = 1.833

#include <stdio.h>
void main(void)
{
    int i, m, n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
		sum=0;
		for (i=m;i<=n;i++) sum+=1.0/i;
        printf("sum = %.3f\n", sum);
    }
}
