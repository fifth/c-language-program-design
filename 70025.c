// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入日期(年、月、日)，输出它是该年的第几天。
// 要求定义与调用函数 day_of_year(year, month, day)，计算并返回year(年)、month(月)和day(日)对应的是该年的第几天，函数形参year、month和day的类型是int，函数类型也是int。
// 输入输出示例：括号内为说明
// 输入：
// 2         (repeat=2)
// 1981 3 1  (1981年3月1日)
// 2000 3 1  (2000年3月1日)
// 输出：
// days of year: 60        (1981年3月1日是该年的第60天)
// days of year: 61        (2000年3月1日是该年的第61天)

#include "stdio.h"
int main(void)
{
    int day, day_year, month, year;
    int repeat, ri;

    int day_of_year(int year, int month, int day);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &year, &month, &day);
        day_year=day_of_year(year,month,day);
        printf("days of year: %d\n", day_year);
    }
}

int day_of_year(int year, int month, int day) {
	int num=0;
	int i;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30};
	if ((year%4==0&&year%100!=0)||(year%400==0)) m[2]++;
	for (i = 1; i<month; i++) num+=m[i];
	for (i = 1; i<=day; i++) num++;
	return num;
}