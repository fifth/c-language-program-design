// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一批正整数(以零或负数为结束标志)，求其中的偶数和。
// 输入输出示例：括号内为说明
// 输入
// 2   		(repeat=2)
// 1 3 90 7 0
// 8 7 4 3 70 5 6 101 -1
// 输出
// The sum of the even numbers is 90.
// The sum of the even numbers is 88.

#include <stdio.h>
int main(void)
{
    int sum, x;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
    	sum = 0;
        scanf("%d", &x);
		do {
			sum += x%2==0?x:0;
			scanf("%d", &x);
		} while (x>0);
        printf("The sum of the even numbers is %d.\n", sum);
    }
}