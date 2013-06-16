// 程序填空，不要改变与输入输出有关的语句。
// 求摄氏温度26°C对应的华氏温度。计算公式：f = 9*c/5 + 32，式中：c表示摄氏温度，f表示华氏温度。
// 输入输出示例：
// celsius = 26, fahr = 78

#include <stdio.h>
int main(void)
{
    int celsius, fahr;  

	celsius = 26;
	fahr = 9*celsius/5 + 32;
    printf("celsius = %d, fahr = %d\n", celsius, fahr); 
}