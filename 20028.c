// 程序填空，不要改变与输入输出有关的语句。
// 输入一个四位数，将其加密后输出。方法是将该数每一位上的数字加9，然后除以10取余，做为该位上的新数字，最后将千位和十位上的数字互换，百位和个位上的数字互换，组成加密后的新四位数。
// 输入输出示例：括号内是说明
// 输入
// 1257
// 输出
// The encrypted number is 4601(每一位上的数字加9除以10取余后，得0146，交换后得到4601)

#include <stdio.h>
int main(void)
{
    int digit1, digit2, digit3, digit4, newnum, number;
    scanf("%d", &number);
    digit1=(number%10+9)%10;
    digit2=(number/10%10+9)%10;
    digit3=(number/100%10+9)%10;
    digit4=(number/1000+9)%10;
    newnum=digit2*1000+digit1*100+digit4*10+digit3;
    printf("The encrypted number is %d\n", newnum);
}