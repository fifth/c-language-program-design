// 程序填空，不要改变与输入输出有关的语句。
// 编写一个函数int max_len(char *s[ ],  int n)，用于计算有n(n<10)个元素的指针数组s中最长的字符串的长度，并编写主程序验证。
// 例：(括号内为说明)
// 输入
// 4	(n=4)
// blue
// yellow
// red
// green
// 输出
// length=6

#include <stdio.h>
#include <string.h>
int max_len(char *s[],int n);
void main()
{
	int i,n;
	char s[10][80],*p[10];

	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		scanf("%s", &s[i]);
		p[i]=s[i];
	}
	printf("length=%d\n",max_len(p,n));
}
int max_len(char *s[],int n) {
	int max=0, i;
	for (i = 0; i < n; i++) {
		if (strlen(*(s+i))>max) max = strlen(*(s+i)); 
	}
	return max;
}