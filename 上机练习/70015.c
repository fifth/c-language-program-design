// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入 n 个整数，将最小值与第一个数交换，最大值与最后一个数交换，然后输出交换后的 n 个数。
// 输入输出示例：括号内为说明
// 输入
// 3         (repeat=3) 
// 5         (n=5) 
// 8 2 5 1 4
// 4         (n=4) 
// 1 5 6 7
// 5         (n=5) 
// 5 4 3 2 1 
// 输出
// After swap: 1 2 5 4 8
// After swap: 1 5 6 7
// After swap: 1 4 3 2 5

#include <stdio.h>
int main(void)
{
    int i, index, n, t;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        index=0;
        for (i=0; i<n; i++) {
            if (a[index]>a[i]) {
                index=i;
            }
        }
        t=a[index];
        a[index]=a[0];
        a[0]=t;

        index=0;
        for (i=0; i<n; i++) {
            if (a[index]<a[i]) {
                index=i;
            }
        }
        t=a[index];
        a[index]=a[n-1];
        a[n-1]=t;
        
        printf("After swap: ");
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}