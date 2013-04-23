// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n，输出 2/1＋3/2＋5/3＋8/5＋……前n项之和，保留2位小数。(该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子)
// 输入输出示例：括号内是说明
// 输入
// 3        (repeat=3) 
// 1        (n=1) 
// 5        (n=5) 
// 20       (n=20) 
// 输出
// sum = 2.00      (第1项是2.00)
// sum = 8.39      (前5项的和是8.39)
// sum = 32.66     (前20项的和是32.66)

#include <stdio.h>
void main(void)
{
    int i, n;
    int repeat, ri;
    double a, b, sum, t;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++) {
        scanf("%d", &n);
        sum = 0;
        a = 2.0;
        b = 1.0;
        for (i = 1; i<=n; i++) {
        	sum += a/b;
        	t = b;
        	b = a;
        	a = t+b;
        }
     	printf("sum = %.2f\n",sum);
    }
}