// 程序填空，不要改变与输入输出有关的语句。
// 输入2个整数 num1 和 num2，计算并输出它们的和、差、积、商与余数。
// 输出两个整数的余数可以用 printf("%d %% %d = %d\n", num1, num2, num1%num2);
// 输入输出示例：括号内是说明
// 输入
// 5 3       (num1=5,num2=3)
// 输出
// 5 + 3 = 8
// 5 - 3 = 2
// 5 * 3 = 15
// 5 / 3 = 1
// 5 % 3 = 2

#include <stdio.h>
int main(void)
{
    int num1, num2;  
    scanf("%d%d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);
    printf("%d %% %d = %d\n", num1, num2, num1%num2);
}