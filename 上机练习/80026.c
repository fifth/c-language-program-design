// 程序填空，不要改变与输入输出有关的语句。
// 输入一行字符(不超过80个)，统计其中的大写字母、小写字母、空格、数字以及其他字符的个数。
// 输入输出示例：
// 输入：
// bFaE3+8 =1R
// 输出：
// upper: 3 lower: 2 blank: 1 digit: 3 other: 2

#include <stdio.h>
void main()
{
    char s[80];
    char *p;
    int blank, digit, lower, other, upper;

    gets(s);
    upper = lower = blank = digit = other = 0;
    p=s;
	while (*p!=0) {
		if (*p>='A'&&*p<='Z') upper++;
		else if (*p>='a'&&*p<='z') lower++;
		else if (*p>='0'&&*p<='9') digit++;
		else if (*p==' ') blank++;
		else other++;
		p++;
	}
	printf("upper: %d lower: %d blank: %d digit: %d other: %d\n", upper, lower, blank, digit, other);
}