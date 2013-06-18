// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 读入1 个实数x和正整数 n(n<=50)，计算并输出 x 的 n 次幂(保留2位小数)，不允许调用pow函数求幂。
// 输入输出示例：括号内是说明
// 输入
// 2       (repeat=2)
// 1.5 2   (x=1.5,n=2)
// 2 7     (x=2,n=7)
// 输出
// 2.25
// 128.00

#include <stdio.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double mypow, x;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &x, &n);
        mypow = 1;
		for (i = 1; i <= n; i++) mypow*=x;
        printf("%.2f\n", mypow);
   }
}