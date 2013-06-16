// 程序填空，不要改变与输入输出有关的语句。
// 输入5个字符串，输出其中最大的字符串。
// 输入输出示例：括号内为说明
// 输入：
// peach 
// pear
// melon
// orange
// berry
// 输出：
// Max is: pear

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[80], max[80];
    int i;

    scanf("%s", str);
    i=1;
    strcpy(max, str);
    while (i<5) {
    	scanf("%s", str);
    	strcpy(max, strcmp(max, str)>0?max:str);
    	i++;
    }
    printf("Max is: %s\n", max);
}   