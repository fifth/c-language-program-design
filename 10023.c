// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 定义一个指针数组将下表的星期信息组织起来，输入一个字符串，在表中查找，若存在，输出该字符串在表中的序号，否则输出-1。
// (表格详见实验教材P99)
// 输入输出示例：括号内为说明
// 输入：
// 3	(repeat=3)
// Tuesday
// Wednesday
// year
// 输出：
// 3
// 4
// -1

#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,ri,repeat,flag;
	char *date[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char str[80];

	scanf("%d",&repeat);
	getchar();
	for(ri=1;ri<=repeat;ri++){
		flag = 0;
		scanf("%s",str);
		for (i = 0; i < 7; i++) 
			if (strcmp(str, *(date+i))==0) {
				printf("%d\n", i+1); 
				flag = 1;
			}
		if (!flag) printf("%d\n", -1);
	}
}