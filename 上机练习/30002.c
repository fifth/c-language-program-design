// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个整数 x，计算并输出下列分段函数 sign(x) 的值。

//           -1   x < 0
// y = sign(x) = 0    x = 0
//           1    x > 0

// 输入输出示例：括号内是说明
// 输入
// 3        (repeat=3) 
// 10       (x=10) 
// 0        (x=0) 
// -98      (x=-98) 
// 输出
// sign(10) = 1    (x = 10时 y = 1)
// sign(0) = 0     (x = 0时 y = 0)
// sign(-98) = -1  (x = -98时y = -1)

#include <stdio.h>
int main(void)
{
    int repeat, ri;
    int x, y;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &x);
        if (x<0) {
        	y = -1;
        } else if (x==0) {
        	y = 0;
        } else if (x>0) {
        	y = 1;
        }
        printf("sign(%d) = %d\n", x, y);
    }
}