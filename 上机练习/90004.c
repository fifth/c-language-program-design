// 程序填空，不要改变与输入输出有关的语句。
// 输入4个整数a1,b1,a2,b2，分别表示两个复数的实部与虚部，求两个复数之积(a1＋b1i)*(a2＋b2i)，乘积的实部为：a1*a2－b1*b2，虚部为：a1*b2＋a2*b1。
// 输入输出示例：括号内为说明
// 输入：
// 3 4 5 6
// 输出：
// (3+4i) * (5+6i) = -9 + 38i

#include <stdio.h>
int main(void)
{
    struct complex{
        int real;
        int imag;
    } product, x, y;

    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
    product.real = x.real*y.real - x.imag*y.imag;
    product.imag = x.real*y.imag + x.imag*y.real;
    printf("(%d+%di) * (%d+%di) = %d + %di\n", x.real, x.imag, y.real, y.imag, product.real, product.imag);
}