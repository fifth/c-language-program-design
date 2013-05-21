// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入两个正整数 m 和 n(1<=m,n<=10000)，输出 m 到 n 之间所有的Fibonacci数。
// Fibonacci 序列(第一项起)：1  1  2  3  5  8  13  21 ......
// 要求定义并调用函数fib(n)，它的功能是返回第 n 项Fibonacci数，函数形参n的类型是int，函数类型是long。例如，fib(7)的返回值是13。
// 输出使用语句：printf("%ld ", f);
// 输入输出示例：括号内是说明
// 输入：
// 3               (repeat=3)
// 1 10            (m=1, n=10)
// 20 100          (m=20, n=100)
// 1000 6000       (m=1000, n=6000)
// 输出：
// 1 1 2 3 5 8        (1到10之间的Fibonacci数)
// 21  34  55  89     (20到100之间的Fibonacci数)
// 1597  2584  4181   (1000到6000之间的Fibonacci数)

#include "stdio.h"
#include "math.h"
int main(void)
{
   int i, m, n;
   int repeat, ri;
   long f;
   long fib(int n);

   scanf("%d",&repeat);
   for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        i=1;
        do {
        	f = fib(i);
        	if (f>=m&&f<=n) printf("%ld ", f);
        	i++;
        } while (fib(i)<=n);
        printf("\n");
    }
}
long fib(int n) {
	return (n==1||n==2)?1:fib(n-1)+fib(n-2);
}