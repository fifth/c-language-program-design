// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 读入 1 个正整数 n(1≤n≤6), 再读入 n 阶方阵 a , 计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。副对角线为从矩阵的右上角至左下角的连线。
// 输入输出示例：括号内为说明
// 输入：
// 1        (repeat=1)
// 4        (n=4)
// 2 3 4 1
// 5 6 1 1
// 7 1 8 1
// 1 1 1 1
// sum = 35   (2+3+4+5+6+7+8=35)

#include "stdio.h"
int main(void)
{
    int i, j, n, sum;
    int repeat, ri;
    int a[6][6];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        sum=0;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
                if ((j<n-1)&&(i<n-1)&&(i+j!=n-1)) {
                    sum+=a[i][j];
                }
            }

        printf("sum = %d\n", sum);
    }
}