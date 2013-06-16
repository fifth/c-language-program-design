// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入1个整数 x，若 x 大于0，sign(x) = 1；若 x 等于0，sign(x) = 0；否则，sign(x) = -1，最后输出sign(x)的值。
// 要求定义和调用函数sign(x)实现该分段函数, 函数形参x的类型是int，函数类型是int。
// 输入输出示例：括号内是说明
// 输入
// 3              (repeat=3) 
// 10             (x=10) 
// -5             (x=-5) 
// 0              (x=0) 
// 输出
// sign(10) = 1     (x=10时sign(x)的值为1)
// sign(-5) = -1    (x=-5时sign(x)的值为-1)
// sign(0) = 0      (x=0时sign(x)的值为0)

#include <stdio.h>
int sign(int x);
void main(void)
{
    int x, y;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d",&x);
        y=sign(x);
        printf("sign(%d) = %d\n", x, y);
    }
}
int sign(int x){
	if (x>0) {
		return 1;
	} else if (x<0) {
		return -1;
	} else {
		return 0;
	}
}