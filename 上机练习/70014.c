// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入n个整数，输出最大值及其对应的最小下标，下标从0开始。
// 输入输出示例：括号内为说明
// 输入
// 3     (repeat=3) 
// 3     (n=3)
// 1 6 4
// 4     (n=4)
// 10 8 1 9
// 5     (n=5)
// 1 2 0 4 5
// 输出
// max = 6, index = 1    (最大值6的下标是1)
// max = 10, index = 0   (最大值10的下标是0)
// max = 5, index = 4    (最大值5的下标是4)

#include <stdio.h>
int main(void)
{
    int i, index, n, max;
    int ri, repeat;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (i==0) {
                max=a[0];
                index=i;
            }
            if (a[i]>=max) {
                max=a[i];
                index=i;
            }
        }
        printf("max = %d, index = %d\n", a[index], index);
    }
}