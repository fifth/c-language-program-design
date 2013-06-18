// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 编写一个程序，输入一个正整数 n，计算sum = 2^1＋2^2＋2^3＋……的前 n 项之和，可以调用pow()函数求幂。
// 例：括号内是说明
// 输入
// 3   (repeat=3)
// 1
// 3
// 5
// 输出
// sum = 2
// sum = 14
// sum = 62

#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        sum = 0;
		for (i = 1; i <= n; i++) sum+=pow(2,i);
        printf("sum = %.0f\n", sum);
    }
}