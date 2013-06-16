// 程序填空，不要改变与输入输出有关的语句。
// 输入华氏温度，输出对应的摄氏温度。计算公式：c = 5*(f-32)/9，式中：c表示摄氏温度，f表示华氏温度。
// 输入输出示例：括号内为说明
// 输入
// 150        (fahr=150)
// 输出
// celsius = 65

#include <stdio.h>
int main(void)
{
    int celsius, fahr;  
    scanf("%d", &fahr);
    celsius = 5*(fahr-32)/9;
    printf("celsius = %d\n", celsius); 
}