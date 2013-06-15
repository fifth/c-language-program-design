// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个整数n (n>=0)和一个双精度浮点数x，输出函数p(n,x)的值(保留2位小数)。
//                 [1                                    (n=0)
//       p(n, x) = [x                                    (n=1)
//                 [((2*n-1)*p(n-1,x)-(n-1)*p(n-2,x))/n   (n>1)
// 例：括号内是说明
// 输入
// 3	  (repeat=3) 
// 0 	0.9	(n=0,x=0.9)
// 1 	-9.8	(n=1,x=-9.8)
// 10 	1.7	(n=10,x=1.7)
// 输出
// p(0, 0.90)=1.00
// p(1, -9.80)=-9.80
// p(10, 1.70)=3.05

#include <stdio.h>
double p(int n, double x);
int main(void)
{
   int repeat, ri;
   int n;
   double x, result;

   scanf("%d", &repeat);
   for(ri = 1; ri <= repeat; ri++)
   {
       scanf("%d%lf", &n, &x);
       result = p(n, x);
       printf("p(%d, %.2lf)=%.2lf\n", n, x, result);
   }
}
double p(int n, double x) {
    if (n==0) return 1;
    else if (n==1) return x;
    else if (n>1) return ((2*n-1)*p(n-1,x)-(n-1)*p(n-2,x))/n;
}