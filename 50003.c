// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一批正整数（以零或负数为结束标志），求其中的奇数和。
// 要求定义和调用函数even(n) 判断数的奇偶性，当n为偶数时返回1，否则返回0，函数形参n的类型是int，函数类型是int。
// 输入输出示例：括号内是说明
// 输入
// 2     (repeat=2) 
// 12 9 7 18 3 11 20 0
// 11 8 6 17 2 10 19 -1
// 输出
// The sum of the odd numbers is 30.
// The sum of the odd numbers is 47.

#include <stdio.h>
int even(int n);
void main(void)
{
    int n, sum;
    int ri, repeat;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){	
        scanf("%d",&n);
        sum=0;
        while (n>0) {
            sum+=(even(n)?0:n);
            scanf("%d",&n);
        }
        printf("The sum of the odd numbers is %d.\n", sum);
   }
}
int even(int n) {
	return (n%2==0)?1:0;
}