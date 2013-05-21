// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个正整数n(n<10)，输出n行数字金字塔。要求定义并调用函数pyramid(n)输出n行数字金字塔，函数形参n的类型是int，函数类型是void。
// 输出使用以下语句：
// printf(" ");
// printf("%d ", i);
// 输入输出示例：括号内是说明
// 输入
// 2   	(repeat=2)
// 5       (n=5)
// 2       (n=2)
// 输出：
//     1   (n=5时的数字金字塔)
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5
//  1      (n=2时的数字金字塔)
// 2 2

#include <stdio.h>
int main(void)
{    
    int n;
    int repeat, ri;
    void pyramid(int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        pyramid(n);
    }
}
void pyramid(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}