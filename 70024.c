// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入1 个正整数 n (1≤n≤6)和 n 阶方阵 a 中的元素，如果 a 是上三角矩阵, 输出"YES", 否则, 输出"NO"。上三角矩阵指主对角线以下的元素都为0的矩阵, 主对角线为从矩阵的左上角至右下角的连线。
// 输入输出示例：括号内为说明
// 输入：
// 2       (repeat=2)
// 3  	(n=3)
// 1  2  3   
// 0  4  5  
// 0  0  6 
// 2  	(n=2)
// 1  0  
// -8  2   
// 输出：
// YES 
// NO

#include "stdio.h"
#include "math.h"
int main(void)
{
    int flag, i, j, n;
    int a[6][6];
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        flag=1;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
                if (j<i&&a[i][j]!=0) flag=0;
            }
        if(flag!=0)  printf("YES\n");
        else  printf("NO\n");
    }
}