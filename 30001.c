// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入参数a,b,c，求一元二次方程a*x*x＋b*x＋c＝0的根，结果保留2位小数。
// 输出使用以下语句：
// printf("参数都为零，方程无意义!\n");
// printf("a和b为0，c不为0，方程不成立\n");
// printf("x = %0.2f\n", -c/b);
// printf("x1 = %0.2f\n", (-b+sqrt(d))/(2*a));
// printf("x2 = %0.2f\n", (-b-sqrt(d))/(2*a));
// printf("x1 = %0.2f+%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
// printf("x2 = %0.2f-%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
// 输入输出示例：括号内为说明
// 输入：
// 5               (repeat=5)
// 0 0 0           (a=0,b=0,c=0)
// 0 0 1           (a=0,b=0,c=1)
// 0 2 4           (a=0,b=2,c=4)
// 2.1 8.9 3.5     (a=2.1,b=8.9,c=3.5)
// 1 2 3           (a=1,b=2,c=3)
// 输出：
// 参数都为零，方程无意义!
// a和b为0，c不为0，方程不成立
// x = -2.00
// x1 = -0.44
// x2 = -3.80
// x1 = -1.00+1.41i
// x2 = -1.00-1.41i

#include <stdio.h>
#include <math.h>
void main(void)
{
    int repeat, ri;
    double a, b, c, d;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%lf%lf", &a, &b, &c);
        d = b*b-4*a*c;
        if (a==0&&b==0&&c==0) {
        	printf("参数都为零，方程无意义!\n");
        } else if (a==0&&b==0&&c!=0) {
        	printf("a和b为0，c不为0，方程不成立\n");
        } else if (a==0&&b!=0&&c!=0) {
        	printf("x = %0.2f\n", -c/b);
        } else if (d>=0) {
        	printf("x1 = %0.2f\n", (-b+sqrt(d))/(2*a));
		printf("x2 = %0.2f\n", (-b-sqrt(d))/(2*a));
        } else if (d<0) {
        	printf("x1 = %0.2f+%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
		printf("x2 = %0.2f-%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
        }
    }
}
