// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个以回车结束的字符串（少于80个字符），将其中的大写字母用下面列出的对应大写字母替换，其余字符不变，输出替换后的字符串。
// 原字母   对应字母
//     A        Z
//     B        Y
//     C        X
//     D        W
//        ……
//     X        C
//     Y        B
//     Z        A
// 输入输出示例：括号内为说明
// 输入：
// 2	(repeat=2)
// A flag of USA
// 1+2=3
// 输出：
// After replaced: Z flag of FHZ
// After replaced: 1+2=3

#include "stdio.h"
#include "string.h"
#define MAXLEN 80
int main(void)
{
    char ch;
    char str[MAXLEN];
    int i;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((ch = getchar()) != '\n'){
            str[i] = ch;
            if (ch>='A'&&ch<='Z') str[i] = 'A' + 'Z' - ch;
            i++;
	}
        str[i] = 0;
      	printf("After replaced: ");
        for(i = 0; str[i] != 0; i++) 
            putchar(str[i]);
        putchar('\n');
   }
}