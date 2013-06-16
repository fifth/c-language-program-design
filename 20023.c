// 程序填空，不要改变与输入输出有关的语句。
// 输入存款金额 money、存期 year 和年利率 rate，根据下列公式计算存款到期时的利息 interest(税前)，输出时保留2位小数。
// interest = money(1+rate)^year - money
// 输入输出示例：括号内为说明
// 输入
// 1000 3 0.025	(money = 1000, year = 3, rate = 0.025)
// 输出
// interest = 76.89

#include <stdio.h>
#include <math.h>
int main(void)
{
    int money, year;
    double interest, rate;
    scanf("%d%d%lf", &money, &year, &rate);
    interest = money*pow(1+rate,year) - money;
    printf("interest = %.2f\n", interest); 
}