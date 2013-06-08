// 程序填空，不要改变与输入输出有关的语句。
// 验证哥德巴赫猜想：任何一个大于6的偶数均可表示为两个素数之和。例如6=3+3，8=3+5，…，18=7+11。
// 素数就是只能被1和自身整除的正整数，1不是素数，2是素数。
// 输入两个正整数 m 和 n(6<=m<=n<=100)，将 m 到 n 之间的偶数表示成两个素数之和，打印时一行打印5组。
// 要求定义并调用函数 prime(m) 判断m是否为素数，当m为素数时返回1，否则返回0，函数形参 m 的类型是int，函数类型是int。
// 输出使用语句：printf("%d=%d+%d ", number, i, number-i);
// 输入输出示例：括号内为说明
// 输入：
// 89 100	(m=89, n=100)
// 输出：
// 90=7+83 92=3+89 94=5+89 96=7+89 98=19+79
// 100=3+97 

#include "stdio.h"
#include "math.h"
int main(void)
{
    int count, i, m, n, number;

    scanf("%d%d", &m, &n);
    count = 0;
    if(m % 2 != 0) m = m + 1;
    if(m >= 6){
    	for (number = m; number <= n; number+=2) {
    		for (i = 3; i <= number/2; i++) if (prime(i)&&prime(number-i)) {
    			printf("%d=%d+%d ", number, i, number-i);
    			count++;
    			if (count%5==0) printf("\n");
    			i = number;
    		}
    	}
    }
}
int prime(int m) {
	int i;
	for (i = 2; i <= sqrt(m); i++)
		if (m%i==0) return 0;
	return 1;
}