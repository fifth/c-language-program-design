// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个时间数值，再输入秒数 n，输出该时间再过 n 秒后的时间值，时间的表示形式为时:分:秒，超过 24 时从 0 时重新开始计时。
// 输入输出示例：括号内为说明
// 输入：
// 3	   (repeat=3)
// 0:0:1
// 59	   (秒数n=59)
// 11:59:40   
// 30	   (秒数n=30)
// 23:59:40   
// 301	   (秒数n=301)
// 输出：
// time: 0:1:0	   (0:0:01加上59秒的新时间)   
// time: 12:0:10	   (11:59:40加上30秒的新时间)
// time: 0:4:41	   (23:59:40加上301秒的新时间)

#include <stdio.h>
int main(void)
{
    int n;
    int repeat, ri;
    struct time{
        int hour, minute, second;
    } time;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d:%d:%d", &time.hour, &time.minute, &time.second);
        scanf("%d",&n);
        time.second += n;
        time.minute += time.second/60;
        time.hour += time.minute/60;
        time.second %= 60;
        time.minute %= 60;
        time.hour %= 24;
        printf("time: %d:%d:%d\n", time.hour, time.minute, time.second);
   }
}