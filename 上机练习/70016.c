// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入 n 个整数，将它们从大到小排序后输出。
// 输入输出示例：括号内为说明
// 输入
// 3           (repeat=3) 
// 4           (n=4) 
// 5 1 7 6
// 3           (n=3) 
// 1 2 3
// 5           (n=5) 
// 5 4 3 2 1 
// 输出
// After sorted: 7 6 5 1 
// After sorted: 3 2 1
// After sorted: 5 4 3 2 1

#include <stdio.h>
int main(void)
{
    int i, index, k, n, temp;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = n-1; i>=1; i--) {
            for (k = 0; k<i; k++) {
                if (a[k]<a[k+1]) {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        printf("After sorted: ");
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}