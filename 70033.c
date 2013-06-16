// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个以回车结束的字符串（少于80个字符），统计并输出其中大写辅音字母的个数。大写辅音字母：除'A', 'E', 'I', 'O', 'U'以外的大写字母。
// 输入输出示例：括号内为说明
// 输入：
// 2		(repeat=2)
// HELLO              
// group
// 输出：
// count = 3       ("HELLO"中有3个大写辅音字母)
// count = 0       ("group"中没有大写辅音字母)

#include "stdio.h"
#define MAXLEN 80
int main(void)
{
    char ch;
    char str[MAXLEN];
    int count, i;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        count=0;
        while((ch = getchar()) != '\n'){
            str[i++]=ch;
            if ((str[i-1]>'A'&&str[i-1]<'E')||(str[i-1]>'E'&&str[i-1]<'I')||(str[i-1]>'I'&&str[i-1]<'O')||(str[i-1]>'O'&&str[i-1]<'U')||(str[i-1]>'U'&&str[i-1]<='Z')) count++;
        }
        str[i] = 0;
        printf("count = %d\n", count);
    }
}