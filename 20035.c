// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 读入一个正整数 n，计算1－1/4＋1/7－1/10＋……的前 n 项之和，输出时保留3位小数。
// 输入输出示例：括号内是说明
// 输入
// 2   (repeat=2)
// 3
// 10
// 输出
// sum = 0.893
// sum = 0.819

#include <stdio.h>
#include <math.h>
void main(void)
{
    int flag, i, n, t;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		sum=0;
		for (i=1;i<=n;i++) sum+=pow(-1,i+1)*1.0/(3*i-2);
		printf("sum = %.3f\n", sum);
    }
}
