// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 编写程序，输入一个正整数n，求1＋1/2＋1/3＋......的前n项之和，输出时保留6位小数。
// 输入输出示例：括号内为说明
// 输入
// 2	(repeat=2)
// 6	(计算1+1/2+1/3+1/4+1/5+1/6)
// 2	(计算1+1/2)
// 输出
// sum = 2.450000
// sum = 1.500000

#include <stdio.h>
int main(void)
{   
    int i, n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);	
		sum = 0;
		for (i = 1; i <= n; i++) sum+=1.0/i;
        printf("sum = %.6f\n", sum);
    }    	 
}