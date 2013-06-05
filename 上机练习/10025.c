// 程序填空，不要改变与输入输出有关的语句。
// 用字符指针实现函数str_cat(s,t)，将字符串t复制到字符串s的末端，并且返回字符串s的首地址，并编写主程序。
// 例：(括号内为说明)
// 输入
// abc
// def
// 输出
// abcdef

#include <stdio.h>
#include <string.h>
char *str_cat(char *s,char *t);
void main()
{
	char s[80],t[80];

	gets(s);
	gets(t);
	puts(str_cat(s,t));
}
char *str_cat(char *s,char *t) {
	strcat(s,t);
	return s;
}