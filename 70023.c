// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n(0<n<10)，输出九九乘法表的前n×n项。
// 提示：将乘数、被乘数和乘积放入一个二维数组中，再输出该数组。
// 输入输出示例：括号内为说明
// 输入：
// 1       (repeat=1)
// 3       (n=3)
// 输出:
// *   1   2   3
// 1   1
// 2   2   4
// 3   3   6   9

#include "stdio.h"
int main(void)
{
    int i, j, n;
    int a[10][10]; 
    int repeat, ri;
 
    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for (i = 1; i<=n; i++) {
            a[0][i]=i;
            a[i][0]=i;
        }
        for (i = 1; i<=n; i++) {
            for (j = 1; j<=n; j++)
                a[i][j]=a[0][j]*a[i][0];
        }
        for(i = 0; i <= n; i++){
            for(j = 0; j <= n; j++)
                if(i == 0 && j == 0) printf("%-4c", '*');
                else if(i == 0 || j <= i) printf("%-4d", a[i][j]);
            printf("\n");
        }
    }
}