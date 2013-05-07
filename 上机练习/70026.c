// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入 1 个正整数 n(1≤n≤6)和 n 阶方阵 a 中的元素，假设方阵 a 最多有1个鞍点，如果找到 a 的鞍点, 就输出其下标, 否则，输出"NO"。鞍点的元素值在该行上最大, 在该列上最小。
// 输入输出示例：括号内为说明
// 输入：
// 2        (repeat=2)
// 4        (n=4)
// 1  7  4  1
// 4  8  3  6
// 1  6  1  2
// 0  7  8  9
// 2        (n=2)
// 1 7
// 4 1
// 输出：
// a[2][1] = 6
// NO 

#include "stdio.h"
int main(void)
{
    int flag, i, j, k, row, col, n;
    int a[6][6];
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        flag=0;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; i++) {
            col=0;
            for (j = 0; j < n; j++) {
                if (a[i][j]>a[i][col]) col=j;
            }
            row=0;
            for (j = 0; j < n; j++) {
                if (a[j][col]<a[row][col]) row=j;
            } 
            if (row==i) {
                flag=1;
                break;
            }
        }
        if(flag != 0)
            printf("a[%d][%d] = %d\n", row, col,a[row][col]);
        else
            printf("NO\n");
    }
}