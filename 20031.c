// 程序填空，不要改变与输入输出有关的语句。
// 计算表达式 1 + 2 + 3 + ...... + 100的值。
// 输出示例：
// sum = 5050

#include <stdio.h>
void main(void)
{
    int i, sum=0;
	for (i=1;i<=100;i++) sum+=i;
    printf("sum = %d\n", sum);
}
