// 程序填空，不要改变与输入输出有关的语句。
// 计算 100^0.5＋101^0.5＋……＋1000^0.5的值(保留2位小数)，可调用sqrt函数计算平方根。
// 输入输出示例：括号内是说明
// 输出
// sum = 20435.99

#include <stdio.h>
#include <math.h>
int main(void)
{
    int i;
    double sum;
    sum = 0;
	for (i = 100; i <= 1000; i++) sum+=sqrt(i);
    printf("sum = %.2f\n", sum);
}