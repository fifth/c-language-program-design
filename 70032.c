// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个字符，再输入一个以回车结束的字符串（少于80个字符），在字符串中查找该字符，如果找到，输出该字符在字符串中所对应的最大下标 (下标从0开始)；否则输出"Not Found"。
// 输入输出示例：括号内为说明
// 输入：
// 2		(repeat=2)
// m               (字符'm')
// programming	(字符串"programming")
// a		(字符'a')
// 1234		(字符串"1234")
// 输出：
// index = 7     	('m'在"programming"中对应的最大下标是7)
// Not Found    	("1234"中没有'a')

#include "stdio.h"
#define MAXLEN 80
int main(void)
{ 
    char cc, ch;
    char str[MAXLEN];
    int count, flag, i, j, index;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        flag=0;
        cc = getchar();
        getchar();

        i = 0;
        while((ch = getchar()) != '\n'){
            str[i++] = ch;
        }
        str[i] = 0;
        for (j = i; j>=0; j--) {
            if (str[j]==cc) {
                index=j;
                flag=1;
                break;
            }
        }
        if(flag != 0)  
            printf("index = %d\n", index);
        else 
            printf("Not Found\n");
    }
}