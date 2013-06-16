// 程序填空，不要改变与输入输出有关的语句。
// 输入一个以回车结束的字符串(少于80个字符)，将它的内容逆序输出。如"ABCD" 的逆序为"DCBA"。
// 输入输出示例：括号内为说明
// 输入：
// Welcome to you!
// 输出：
// !uoy ot emocleW 

#include <stdio.h> 
int main(void)
{
    int i, j, temp;
    char str[80];		

    i = 0;
    while((str[i] = getchar( )) != '\n') 
        i++; 
    str[i] = 0;   
    for(j = i-1; j>=0; j--) 
        putchar(str[j]);
}