// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入 n 个整数存入数组 a 中，用选择法将数组 a 中的元素按升序排列，最后输出排序后的数组元素。
// 要求定义并调用函数 sort(a，n)，它的功能是采用选择排序算法，将数组 a 的前 n 个元素按从小到大的顺序排序，函数形参 a 的类型是整型指针，形参n的类型是int，函数的类型是void。
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
// After sorted: 1 5 6 7  
// After sorted: 1 2 3 
// After sorted: 1 2 3 4 5 

#include <stdio.h>
void sort(int a[],int n);
int main(void)
{
    int i, n;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        sort(a, n);
        printf("After sorted: ");
        for(i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}
void sort(int a[], int n) {
    int i, j, flag, temp;
    for (i = 0; i < n; i++) {
        flag = i;
        for (j = i+1; j < n; j++) {
            if (*(a+flag)>*(a+j)) flag = j;
        }
        temp = *(a+i);
        *(a+i) = *(a+flag);
        *(a+flag) = temp;
    }
}