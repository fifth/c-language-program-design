// 程序填空，不要改变与输入输出有关的语句。
// 编写一个解密藏尾诗的程序。输入一首藏尾诗（假设只有4句），输出其藏尾的真实含义。用返回字符指针的函数实现。
// 例：
// 输入：
// 悠悠田园风
// 然而心难平
// 兰花轻涌浪
// 兰香愈幽静
// 输出：
// 风平浪静

#include <stdio.h>
#include <string.h>
char p[16];
void main()
{
	char *change(char s[4][20]);
	char s[4][20];
	int	i;
	for (i=0;i<4;i++)
		scanf("%s",s[i]);
	puts(change(s));
}
char *change(char s[4][20])
{
	int	i,len;
	for (i = 0; i < 4; i++){
		p[2*i] = s[i][strlen(s[1])-2];
		p[2*i+1] = s[i][strlen(s[1])-1];	
	}
	p[2*i]=0;
	return p;
}