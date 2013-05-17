// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入2 个正整数 m 和 n(1<=m,n<=1000)，输出 m 到 n 之间的所有水仙花数。水仙花数是指各位数字的立方和等于其自身的数。
// 要求定义并调用函数is(number)判断 number 的各位数字之立方和是否等于其自身，若相等则返回1，否则返回0，函数形参 number 的类型是int，函数类型是int。
// 输出使用语句：printf("%d\n", i);
// 输入输出示例：括号内是说明
// 输入：
// 2        (repeat=2)
// 100 400  (m=100, n=400)
// 1 100    (m=1, n=100)
// 输出：
// result:  (100 到400之间的水仙花数)
// 153        (1*1*1+5*5*5+3*3*3=153)
// 370        (3*3*3+7*7*7=370)
// 371        (3*3*3+7*7*7+1*1*1=371)
// result:  (1到100之间的水仙花数)
// 1	   (1*1*1=1)

#include "stdio.h"
int main(void)
{
    int i, m, n;
    int repeat, ri;
    int is(int number); 
  
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
        if (n==1000) {
        	n=999;
        }
        for (i = m; i <= n; i++) {
        	if (is(i)) {
        		printf("%d\n", i);
        	}
        }
    }
}
int is(int number) {
	int a,b,c;
	c=number%10;
	b=number/10%10;
	a=number/100;
	if (a*a*a+b*b*b+c*c*c==number) {
		return 1;
	} else {
		return 0;
	}
}