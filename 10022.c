// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 编写程序，输入一个月份，输出对应的英文名称，要求用指针数组表示12个月的英文名称。
// 若输入月份错误，输出提示信息。
// 输入输出示例：括号内为说明
// 输入：
// 3	(repeat=3)
// 5
// 9
// 14
// 输出：
// May
// September
// Wrong input!

#include <stdio.h>
void main()
{
	int ri,repeat;
	int month;
	char *month_name[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	
	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&month);
		if (month>=1&&month<=12) printf("%s\n", *(month_name+month));
		else printf("Wrong input!\n");
	}
}