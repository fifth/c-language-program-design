// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入精度 e 和 x，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e。
// cos(x) = x^0/0!－x^2/2!＋x^4/4!－x^6/6!＋……
// 要求定义并调用函数 funcos(e,x)计算 cos(x) 的值，函数形参e和x的类型均为double，函数类型是double。
// 输入输出示例：括号内是说明
// 输入：
// 2    		(repeat=2)
// 0.001  0  	(e=0.001, x=0)
// 0.0001 -3.14	(e=0.0001, x=-3.14)
// 输出：
// sum = 1.000000
// sum = -0.999999

#include "stdio.h"
#include "math.h"
double funcos(double e, double x);
void main(void)
{
    int repeat, ri;
    double e, sum, x; 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le%le", &e, &x);
        sum=funcos(e,x);
        printf("sum = %f\n", sum);
    }
}
double funcos(double e, double x) {
	int i=0, flag=1;
	double temp,re=1;
	double sum=0;
	sum=temp=flag*pow(x,i)*1.0/re;
	if (fabs(temp)<e) return temp;
	do {
		re*=(i+1)*(i+2);
		flag=-flag;
		i+=2;
		temp=flag*pow(x,i)*1.0/re;
		sum+=temp;
	} while (fabs(temp)>e);
	return sum;
}
