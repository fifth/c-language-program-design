// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列操作：
// 输入一个正整数n，打印一个边长为 n 的菱形图案。
// 输出使用以下语句：
// printf(" ");
// printf("* ");
// printf("\n");
// 输入输出示例：括号内为说明
// 输入
// 2        (repeat=2)
// 3        (n=3) 
// 4        (n=4) 
// 输出
//     *   （n=3的菱形图案）
//   * * * 
// * * * * *
//   * * *
//     *
//       * （n=4的菱形图案）
//     * * * 
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include "stdio.h"
int main(void)
{
    int i, j, n;
    int repeat, ri; 
	
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for (i=1; i<=n; i++) {
        	for (j=1; j<=n+i-1; j++) {
        		if (j<=n-i) {
        			printf("  ");
        		} else {
        			printf("* ");
        		}
        	}
        	printf("\n");
        }
        for (i=n-1; i>=1; i--) {
        	for (j=1; j<=n+i-1; j++) {
        		if (j<=n-i) {
        			printf("  ");
        		} else {
        			printf("* ");
        		}
        	}
        	printf("\n");
        }
    }
}