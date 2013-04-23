// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入两个正整数 m 和 n(1<=m, n<=1000)，输出 m 与 n之间（含m,n）的所有满足各位数字的立方和等于它本身的数。
// 例如153的各位数字的立方和是 1^3＋5^3＋3^3＝153 ,这里a^b表示a的b次方。
// 输出使用语句：printf("%d\n", i);
// 输入输出示例：括号内为说明
// 输入：
// 2            (repeat=2)
// 100 400      (m=100, n=400)
// 1 100        (m=1, n=100)
// 输出：
// result:
// 153          (1*1*1+5*5*5+3*3*3=153)
// 370          (3*3*3+7*7*7=370)
// 371          (3*3*3+7*7*7+1*1*1=371)
// result:
// 1            (1*1*1=1)

#include "stdio.h"
void main(void)
{
    int i, a, b, c, m, n;
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
        for (i = m; i <= n; i++) {
        	a = i % 10;
        	b = i % 100 / 10;
        	c = i / 100;
        	if ((i==a*a*a+b*b*b+c*c*c)&&(i!=1000)) {
        		printf("%d\n", i);
        	}
        }
    }
}