// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入两个正整数m和n，输出它们的最小公倍数和最大公约数。
// 输入输出示例：括号内为说明
// 输入：
// 3        (repeat=3)
// 3 7      (m=3,n=7)
// 24 4     (m=24,n=4)
// 24 18    (m=24,n=18)
// 输出：
// 21 is the least common multiple of 3 and 7, 1 is the greatest common divisor of 3 and 7.
// 24 is the least common multiple of 24 and 4, 4 is the greatest common divisor of 24 and 4.
// 72 is the least common multiple of 24 and 18, 6 is the greatest common divisor of 24 and 18.

#include <stdio.h>
int main(void)
{
    int gcd, lcm, m, n,temp;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        scanf("%d", &n);
        if(m <= 0 || n <= 0)
            printf("m <= 0 or n <= 0");
        else{
            temp = m;
            while (temp%n != 0) {
                temp += m;
            }
            lcm = temp;
            gcd = m*n/lcm;
            printf("%d is the least common multiple of %d and %d, %d is the greatest common divisor of %d and %d.\n", lcm, m, n, gcd, m, n);
        }
    }
}