// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个正整数 n，计算1－2/3＋3/5－4/7＋5/9-6/11+……的前n项之和，输出时保留3位小数。
// 输入输出示例：括号内是说明
// 输入
// 3        (repeat=3)
// 1        (n=1)
// 3        (n=3)
// 5        (n=5)
// 输出
// sum = 1.000
// sum = 0.933
// sum = 0.917

#include <stdio.h>
#include <math.h>
void main(void)
{
    int i, n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        sum=0;
        for (i=1;i<=n;i++) sum+=pow(-1,i+1)*i*1.0/(2*i-1);
      	printf("sum = %.3f\n", sum);
    }
}
