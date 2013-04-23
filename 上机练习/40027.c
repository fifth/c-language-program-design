// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个整数，从高位开始逐位输出它的各位数字。
// 输出语句：printf("%-2d", digit);
// 例：括号内是说明
// 输入
// 3   (repeat=3) 
// 23456
// -600
// 8
// 输出
// 2 3 4 5 6
// 6 0 0
// 8

#include <stdio.h>
#include <math.h>
int main(void)
{
    int digit, in, power, temp, count, i;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
        if (in < 0) {
        	in = -in;
        }
        count = 1;
        temp = in;
        while (temp/=10) {
        	count++;
        }
        for (i = 1; i <= count; i++) {
        	power = pow(10,count-i);
        	printf("%d", in/power);
        	in %= power;
        	if (i!=count) {
        		printf(" ");
        	}
        }
     	printf("\n");
   }
}