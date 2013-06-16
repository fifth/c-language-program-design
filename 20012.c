// 程序填空，不要改变与输入输出有关的语句。
// 求华氏温度 150°F 对应的摄氏温度。计算公式：c = (5/9)*f-(5/9)*32，式中：c表示摄氏温度，f表示华氏温度。
// 输入输出示例：
// fahr = 150, celsius = 66

#include <stdio.h>
int main(void)
{
    int celsius, fahr;  
    fahr = 150;
	celsius  = (int)5*(fahr-32)*1.0/9+0.5;
    printf("fahr = %d, celsius = %d\n", fahr, celsius); 
}