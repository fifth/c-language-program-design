// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入 n 个整数，存入数组a中，先将数组a中的这n个数逆序存放，再按顺序输出数组中的n个元素。
// 输入输出示例：括号内为说明
// 输入
// 2            (repeat=2) 
// 4            (n=4) 
// 10 8 1 2
// 5            (n=5) 
// 1 2 5 4 0 
// 输出
// 2 1 8 10
// 0 4 5 2 1

#include <stdio.h>
int main(void)
{
    int i, n, temp;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        for(i = n-1; i >=0; i--) printf("%d ", a[i]);
        printf("\n");
    }
}