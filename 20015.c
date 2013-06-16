// 程序填空，不要改变与输入输出有关的语句。
// 当n为152时，分别求出 n 的个位数字(digit1)、十位数字(digit2)和百位数字(digit3)的值。
// 输入输出示例：
// 整数152的个位数字是2, 十位数字是5, 百位数字是1

#include <stdio.h>
int main(void)
{
    int n, digit1, digit2, digit3;  
    n = 152;
    digit1 = n%10;
    digit2 = n/10%10;
    digit3 = n/100;
    printf("整数%d的个位数字是%d, 十位数字是%d, 百位数字是%d\n", n, digit1, digit2, digit3); 
}