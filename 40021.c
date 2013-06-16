// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入1个正整数n，计算下式的前n+1项之和(保留4位小数)。要求使用嵌套循环。
//    e = 1＋1/1!＋1/2!＋....＋1/n!  
// 输入输出示例：括号内为说明
// 输入：
// 2       (repeat=2)
// 2       (n=2)
// 10      (n=10)
// 输出：
// e = 2.5000
// e = 2.7183

#include "stdio.h"
int main(void)
{
    int i, j, n;
    int repeat, ri;
    double e, product;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        e = 1;
        j = 1;
        for (i = 1; i <= n; i++) {
        	j *= i;
        	e += 1.0/j;
        }
    	printf("e = %0.4f\n", e);
  }
}