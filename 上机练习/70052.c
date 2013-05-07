// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个以回车符结束的字符串（少于80个字符），再输入一个字符，统计并输出该字符在字符串中出现的次数。
// 输入输出示例：括号内为说明
// 输入：
// 2		(repeat=2)
// programming	(字符串"programming")
// m               (字符'm')
// 1234		(字符串"1234")
// a		(字符'a')
// 输出：
// count = 2	('m'在"programming"中出现2次)
// count = 0	('a'在"1234"中没有出现过)

#include "stdio.h"
#define MAXLEN 80
int main(void)
{	
    char cc, ch;
    char str[MAXLEN];
    int i,count,j;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
    	while((str[i] = getchar( )) != '\n') 
            i++; 
    	str[i] = 0;
	cc = getchar();
	getchar();	
    count=0;
    for (j=0; j<i; j++) if (str[j]==cc) count++;
   	printf("count = %d\n", count);
   }
}