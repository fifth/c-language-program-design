// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入两个正整数 a 和 n, 求a＋aa＋aaa＋aa…a(n个a)之和。
// 要求定义并调用函数fn(a, n)，它的功能是返回 aa…a（n个a），函数形参a和n的类型是int，函数类型是long。例如，fn(3,2)的返回值是33。
// 输入输出示例：括号内是说明
// 输入
// 2       (repeat=2)
// 2 3     (a=2, n=3)
// 8 5     (a=8, n=5)
// 输出
// 246     (2+22+222)
// 98760   (8+88+888+8888+88888) 

#include <stdio.h>
int main(void)
{
    int a, i, n;
    int ri, repeat;
    long sn;
    long fn(int a, int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%ld%d", &a, &n);
        sn=0;
        for (i = 1; i <= n; i++) {
        	sn+=fn(a,i);
        }
        printf("%ld\n", sn);
    }
}
long fn(int a, int b){
	return b==1?a:10*fn(a,b-1)+a;
}