// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个正整数 n (1<n<=10)，然后输入n个整数存入数组a中，再输入一个整数x，在数组a中查找x，如果找到则输出相应元素的最小下标，否则输出"Not found"。
// 要求定义并调用函数search(list, n, x)，它的功能是在数组list中查找元素x，若找到则返回相应元素的最小下标，否则返回-1，函数形参 list 的类型是整型指针，形参n和x的类型是int，函数的类型是void。
// 输入输出示例：括号内为说明
// 输入
// 2              (repeat=2) 
// 3              (n=3)
// 1 2 -6      
// 2              (x=2)
// 5              (n=5)
// 1 2 2 5 4
// 0              (x=0)
// 输出
// index = 1
// Not found

#include <stdio.h>
void main(void)
{
    int i, index, n, res, x;
    int repeat, ri;
    int a[10];

    int search(int list[], int n, int x);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        res = search(a, n, x);
        if(res != -1)
            printf("index = %d\n", res);
        else
            printf("Not found\n");
    }
}
int search(int list[], int n, int x) {
    int i, *p;
    p = list;
    for (i = 0; i < n; i++) if (*(p+i)==x) return i;
    return -1;
}