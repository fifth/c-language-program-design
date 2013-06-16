// 程序填空，不要改变与输入输出有关的语句。 
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，再输入 n 个整数，将它们存入数组 a 中，再输入一个整数 x，然后在数组 a 中查找与 x 相同的元素，如果找到，输出 x 在数组 a 中对应元素的最小下标，如果没有找到，输出相应信息。
// 输入输出示例：括号内为说明
// 输入：
// 2       (repeat=2)
// 6       (n=6)
// 1 3 5 7 9 5
// 5       (x=5)
// 4       (n=4)
// 1 3 5 7
// 2       (x=2)
// 输出：
// 5: a[2]
// 2: not found

#include <stdio.h>
int main(void)
{
    int flag, i, n, x;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){ 	
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        flag=0;
        for (i = 0; i<n; i++) {
            if (a[i]==x) {
                flag=1;
                break;
            }
        }
        if(flag != 0)
            printf( "%d: a[%d]\n", x, i); 
        else
            printf( "%d: not found\n", x);

    }
}