// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个正整数 n，计算表达式 1 + 1/3 + 1/5 + ...... 的前 n 项之和，输出时保留6位小数。
// 输入输出示例：括号内为说明
// 输入
// 2	(repeat=2)
// 5	(计算1+1/3+1/5+1/7+1/9)
// 23	(计算1+1/3+1/5+...+1/45)
// 输出
// sum = 1.787302
// sum = 2.549541

#include <stdio.h>
void main(void)
{
    int i, n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		sum=0;
		for (i=1;i<=n;i++) sum+=1.0/(2*i-1);
        printf("sum = %.6f\n", sum);
    }
}
