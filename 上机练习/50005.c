// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入2个正整数 m 和 n（1<=m,n<=500），统计并输出 m 到 n 之间的素数的个数以及这些素数的和。素数就是只能被1和自身整除的正整数，1不是素数，2是素数。
// 要求定义并调用函数 prime(m) 判断m是否为素数，当m为素数时返回1，否则返回0，函数形参 m 的类型是int，函数类型是int。
// 输入输出示例：括号内是说明
// 输入：
// 1      			(repeat=1)
// 1 10   			(m=1, n=10)
// 输出：
// Count = 4, sum = 17    	(1到10之间有4个素数：2,3,5,7)

#include "stdio.h"
#include "math.h"
int main(void)
{
    int count, i, m, n, sum;
    int repeat, ri;
    int prime(int m);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        sum=count=0;
		for (i = m; i <= n; i++) {
			count+=prime(i)?1:0;
			sum+=prime(i)?i:0;
		}
        printf("Count = %d, sum = %d\n", count, sum);
    }
}
int prime(int m) {
	int i;
	if (m==1) {
		return 0;
	} else {
		for (i = 2; i < m; i++) {
			if (m%i==0) {
				return 0;
			}
		}
		return 1;
	}
}