// 程序填空，不要改变与输入输出有关的语句。
// 求华氏温度100°F对应的摄氏温度。计算公式 c=5*(f-32)/9，式中：c表示摄氏温度，f表示华氏温度。
// 输入输出示例：
// fahr = 100, celsius = 37

#include <stdio.h>
int main(void)
{   
    int celsius, fahr;
	fahr = 100;
	celsius = 5*(fahr-32)/9;
    printf("fahr = %d, celsius = %d\n", fahr, celsius); 
}