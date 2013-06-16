// // 程序填空，不要改变与输入输出有关的语句。
// 输入2个整数 time1 和 time2，表示火车的出发时间和到达时间，计算并输出旅途时间。
// 有效的时间范围是0000到2359(前两位表示小时，后两位表示分钟)，不需要考虑出发时间晚于到达时间的情况。
// 输入输出示例：括号内是说明
// 输入
// 712 1411	(出发时间是7:12，到达时间是14:11)
// 输出
// The train journey time is 6 hours 59 minutes.

#include <stdio.h>
int main(void)
{
   int time1, time2, hour, minutes;

   scanf("%d%d", &time1, &time2);
   minutes = (time2/100*60+time2%100)-(time1/100*60+time1%100);
   hour = minutes/60;
   minutes %=60;
   printf("The train journey time is %d hours %d minutes.\n", hour, minutes);
}