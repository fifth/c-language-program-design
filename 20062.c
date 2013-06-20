// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入两个正整数 m 和 n(m<=n)，求 sum = m*m＋1/m＋(m+1)*(m+1)＋1/(m+1)＋(m+2)*(m+2)＋1/(m+2)......＋n*n＋1/n，结果保留6位小数。
// 输入输出示例：括号内为说明
// 输入
// 3        (repeat=3)
// 1 2      (m=1,n=2)
// 2 5      (m=2,n=5)
// 5 10     (m=5,n=10)
// 输出
// sum = 6.500000
// sum = 55.283333
// sum = 355.845635

#include <stdio.h>
void main(void)
{
    int i, m, n;
    int repeat, ri;
    double sum;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        sum=0;
        for (i=m;i<=n;i++) sum+=i*i+1.0/i;
        printf("sum = %.6f\n", sum);
     }
 }
