// // 程序填空，不要改变与输入输出有关的语句。
// 输入2个正整数 m 和 n (1<=m<=6, 1<=n<=6)，然后输入矩阵 a（m 行 n 列）中的元素，分别求出各行元素之和，并输出。
// 输出使用语句：printf("sum of row %d is %d\n", i, sum);
// 输入输出示例：括号内为说明
// 输入：
// 3 2		(m=3,n=2)
// 6  3
// 1  -8
// 3  12
// 输出：
// sum of row 0 is 9
// sum of row 1 is -7
// sum of row 2 is 15

#include <stdio.h> 
int main(void)
{
    int i, j, m, n, sum;
    int a[6][6];
	
    scanf("%d%d",&m,&n);
    for(i = 0; i < m; i++)    
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; i++) {
    	sum=0;
    	for (j = 0; j < n; j++) sum+=a[i][j];
    	printf("sum of row %d is %d\n", i, sum);
    }
}