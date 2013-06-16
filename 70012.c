// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入 n 个整数，输出平均值(保留2位小数)。
// 输入输出示例：括号内为说明
// 输入
// 2          (repeat=2) 
// 3          (n=3) 
// 1 2 -6    
// 5          (n=5) 
// 12 2 5 4 0 
// 输出
// average = -1.00
// average = 4.60

#include <stdio.h>
int main(void)
{
    int i, n, sum;
    int repeat, ri;
    int a[10];
    double aver;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        sum=0;
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sum+=a[i];
        }
        aver=sum*1.0/n;
        printf("average = %.2f\n", aver);
    }
}