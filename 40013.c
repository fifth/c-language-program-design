// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 读入一批正整数(以零或负数为结束标志)，求其中的奇数和。请使用while语句实现循环。
// 输入输出示例：括号内是说明
// 输入
// 2       (repeat=2)
// 1 3 90 7 0
// 8 7 4 3 70 5 6 101 -1
// 输出
// The sum of the odd numbers is 11.
// The sum of the odd numbers is 116.

#include <stdio.h>
int main(void)
{
    int x, sum;
    int repeat, ri;


    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
    	sum = 0;
        scanf("%d", &x);
        while (x>0) {
        	if (x%2==1) sum += x;
        	scanf("%d", &x);
        }
      	printf("The sum of the odd numbers is %d.\n", sum);
      }
}