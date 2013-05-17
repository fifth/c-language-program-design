// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入两个整数a和b，输出其中较大的数。要求定义和调用函数max(a, b)找出a、b中较大的数，函数形参a、b的类型是int，函数类型是int。
// 输入输出示例：括号内是说明
// 输入
// 3       (repeat=3)
// 输入：
// 5 8     (a=5, b=8)
// -1 -10  (a=-1, b=-10)
// 1 1     (a=1, b=1)
// 输出：
// max(5,8) = 8
// max(-1,-10) = -1
// max(1,1) = 1

#include <stdio.h>
int main(void)
{    
    int a, b, maximum;
    int repeat, ri;
    int max(int a, int b);
   
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d",&a, &b);
        maximum=max(a,b);
        printf("max(%d,%d) = %d\n", a, b, maximum);
    }
}
int max(int a, int b) {
	return a>b?a:b;
}