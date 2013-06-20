// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 读入1 个整数in，再输入一个数字digit(0≤digit<10)，统计并输出整数 in 中数字 digit 的个数。
// 要求定义并调用函数countdigit(number,digit)，它的功能是统计整数 number 中数字 digit 的个数 ,函数形参number和digit的类型是int，函数类型是int。例如，countdigit(10090,0)的返回值是3。
//输入输出示例：括号内是说明
// 输入
// 2         (repeat=2)
// 21252 2   (number=21252, digit=2)
// -1111 9   (number=-1111, digit=9)
// 输出
// Number 21252 of digit 2: 3       (21252中有3个2)
// Number -1111 of digit 9: 0       (-1111中有0个9)

#include "stdio.h"
int main(void)
{
    int count, digit, in; 
    int repeat, ri;
    int countdigit(int number, int digit);

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &in, &digit);
        count = countdigit(in, digit);
        printf("Number %d of digit %d: %d\n", in, digit, count);
    }
}

int countdigit(int number, int digit)
{
    int k;
    if (number < 0)
        number = -number;
    k = number % 10;
    if (number == 0)
        return 0;
    if (k == digit)
        return countdigit(number / 10, digit) + 1;
    else
        return countdigit(number / 10, digit);
}
