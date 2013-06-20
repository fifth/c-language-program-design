// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个正整数m(0<=m<=100)，计算表达式 m + (m+1) + (m+2) + ...... + 100的值。
// 输入输出示例：括号内为说明
// 输入
// 3	(repeat=3)
// 0	(计算0+1+2+...+100)
// 10	(计算10+11+12+...+100)
// 50	(计算50+51+52+...+100)
// 输出
// sum = 5050
// sum = 5005
// sum = 3825

#include <stdio.h>
void main(void)
{
    int i, m, sum;
    int repeat, ri;
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
		sum=0;
		for (i=m;i<=100;i++) sum+=i;
        printf("sum = %d\n", sum);
    }
}
