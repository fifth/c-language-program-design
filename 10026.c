// 程序填空，不要改变与输入输出有关的语句。
// 编写一个程序，输入一个字符串后再输入2个字符，输出此字符串中从与第一个字符匹配的位置开始到与第二个字符匹配的位置之间的所有字符。用返回字符指针的函数实现。
// 例：(括号内为说明)
// 输入
// program
// r
// g
// 输出
// rog

#include <stdio.h>
char newstr[80];
void main()
{
	char str[80],c_begin,c_end;
	char *fun(char *p,char c_begin,char c_end);

	scanf("%s",str);
	getchar();
	c_begin=getchar();
	getchar();
	c_end=getchar();
	puts(fun(str,c_begin,c_end));
}
char *fun(char *p,char c_begin,char c_end) {
	int i;
	for (i = 0; *(p+i)!=0 ; i++) {
		if (*(p+i)==c_end) {
			*(p+i+1)=0;
		}
	}
	for (i = 0; ; i++) {
		if (*(p+i)==c_begin) return p+i;
	}
}