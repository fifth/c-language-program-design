// 程序填空，不要改变与输入输出有关的语句。
// 编写程序，从键盘输入 n (n<10)本书的名称和定价并存入结构数组中，查找并输出其中定价最高和最低的书的名称和定价。
// 输入输出示例：括号内为说明
// 输入：
// 3	(n=3)
// Programming in C
// 21.5
// Programming in VB
// 18.5
// Programming in Delphi
// 25.0
// 输出：
// highest price: 25.0, Programming in Delphi 
// lowest price: 18.5, Programming in VB 

#include <stdio.h>
int main (void)
{  
    int i, max_index, min_index, n;
    double x;
    struct book{
        char name[50];
        double price;
    }book[10];

    scanf("%d", &n);
    getchar();
    max_index = min_index = 0;
    for(i = 0; i < n; i++){
        gets(book[i].name);
        scanf("%lf", &x);
        getchar();
        book[i].price = x;
        if (book[i].price > book[max_index].price) max_index = i;
        if (book[i].price < book[min_index].price) min_index = i;
    }
    printf("highest price: %.1f, %s\n", book[max_index].price, book[max_index].name);
    printf("lowest price: %.1f, %s\n", book[min_index].price, book[min_index].name);
}