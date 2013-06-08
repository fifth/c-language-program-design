// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数n（3≤n≤10），再输入n个雇员的信息，包括姓名、基本工资、浮动工资和支出，输出每人的姓名和实发工资，实发工资＝基本工资+浮动工资-支出。
// 输入输出示例：括号内为说明
// 输入：
// 3		(n=3)
// zhao 240 400 75
// qian 360 120 50
// zhou 560 0 80
// 输出： 
//  zhao 实发工资： 565.00
//  qian 实发工资： 430.00
//  zhou 实发工资： 480.00

#include <stdio.h>
int main (void)
{
    int i, n;
    double x;
    struct emp{
        char  name[10]; 
        double jbg;  
        double fdg;   
        double zc;
    } s[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%lf %lf %lf", &s[i].jbg, &s[i].fdg, &s[i].zc);
    }
    for (i = 0; i < n; i++)      
        printf ("%5s 实发工资：%7.2f\n", s[i].name, s[i].jbg + s[i].fdg - s[i].zc);
}  