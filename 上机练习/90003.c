// 程序填空，不要改变与输入输出有关的语句。
// 输入整数n(n<10)，再输入n个学生的基本信息，包括序号、姓名和成绩，要求计算并输出他们的平均成绩(保留2位小数)。
// 输入输出示例：括号内为说明
// 输入：
// 3	(n=3)
// 1  zhang  70
// 2  wang  80
// 3  qian  90
// 输出：
// average: 80.00

#include <stdio.h>
int main(void)
{
    int i, n;
    double average, sum = 0;
    struct student{
        int num;
        char name[10];
        int score;
    } s[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	scanf("%d%s%d", &s[i].num, s[i].name, &s[i].score);
    	sum += s[i].score;
    }
    average = sum/i;
    printf("average: %.2f\n", average);
}