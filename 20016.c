// 程序填空。
// 假设 x 的值为3，计算 x 的平方 y，并分别以"y = x * x"和"x * x = y"的形式输出 x 和 y 的值。
// 输入输出示例：
// 9 = 3 * 3
// 3 * 3 = 9

#include <stdio.h>
int main(void)
{
    int x,y;  
	x = 3;
	y = x*x;
	printf("%d = %d * %d\n", y, x, x);
	printf("%d * %d = %d\n", x, x, y);
}