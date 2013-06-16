// 程序填空，不要改变与输入输出有关的语句。
// 输入两个正整数 n 和 m (1<m<n<=10)，再输入 n 个整数，将这些数排成一行，向右循环移动 m 个位置（从右边移出的数再从左边移入），最后输出移动后的n个整数。
// 要求定义并调用函数 mov(x,n,m) 实现上述循环移动的功能，函数形参x的类型是整型指针，形参n和m的类型是int，函数的类型是void。
// 输入输出示例：括号内为说明
// 输入：
// 5 3            (n=5,m=3)
// 1 2 3 4 5      (5个整数)
// 输出：
// After move: 3 4 5 1 2

#include "stdio.h"
void mov(int *x, int n, int m);
int main(void) {
    int i, m, n;
    int a[80];

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++) {
    	scanf("%d", &a[i]);
    }
    mov(&a[0], n, m);
    printf("After move: ");
    for(i = 0; i < n; i++) {
    	printf("%d ", a[i]);
    }
    printf("\n"); 
}
void mov(int *x, int n, int m){
	int tmp, i, j;
	for (i = 1; i <= m; i++) {
		tmp = *(x+n-1);
		for (j = n-1; j >= 1; j--) *(x+j) = *(x+j-1);
		*x = tmp;
	}
}