// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个整数 in，输出其逆序数。
// 要求定义并调用函数reverse(number)，它的功能是返回number的逆序数，函数形参number的类型是int，函数类型是int。例如，reverse(12345)的返回值是54321。
// 输入输出示例：括号内是说明
// 输入
// 5        (repeat=4) 
// 12345    (in=12345) 
// -100     (in=-100) 
// -2       (in=-2) 
// 99       (in=99) 
// 0        (in=0) 
// 输出
// 54321    (12345的逆序数)
// -1       (-100的逆序数)
// -2       (-2的逆序数)
// 99       (99的逆序数)
// 0        (0的逆序数)

#include <stdio.h>
int main(void)
{
    long in, res;
    int ri, repeat;
    long reverse(long number); 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%ld", &in);
        res = in<0?-1:1;
        in = in<0?-in:in;
        res *= reverse(in);
        printf("%ld\n", res);
    }
}
long reverse(long number){
	int i=0;
	do {
		i=i*10+number%10;
		number/=10;
	} while (number!=0);
	return i;
}