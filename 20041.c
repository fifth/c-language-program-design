// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数n，生成一张3的乘方表，输出3^0 ~ 3^n的值，可调用幂函数计算3的乘方。
// 输出使用语句 printf("pow(3,%d) = %.0f\n", i, mypow);
// 输入输出示例：括号内是说明
// 输入
// 3	(n=3)
// 输出
// pow(3,0) = 1
// pow(3,1) = 3
// pow(3,2) = 9
// pow(3,3) = 27

#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    double mypow;

    scanf("%d", &n);
    mypow = 1;
    i = 0;
    printf("pow(3,%d) = %.0f\n", i, mypow);
	for (i = 1; i <= n; i++) {
		mypow *= 3;
		printf("pow(3,%d) = %.0f\n", i, mypow);
	}
}