// 程序填空，不要改变与输入输出有关的语句。
// 输入两个正整数 n 和 m（ (1<m<n<=50)），有 n 个人围成一圈，按顺序从 1 到 n 编号。从第一个人开始报数，报数 m 的人退出圈子，下一个人从 1 开始重新报数，报数 m 的人退出圈子。如此循环，直到留下最后一个人。请按退出顺序输出退出圈子的人的编号，以及最后一个人的编号。
// 提示：将每个人的编号存入数组，从第一个人开始报数，输出报数 m 的人的编号，并将该编号清除为0，重复这样的操作直至只剩下一个不为0的数，该数就是最后一个人的编号。
// 输出使用语句：printf("No%d: %d\n", no, *p);
// 输入输出示例：括号内为说明
// 输入：
// 5               (n个人报数，n=5)
// 3               (报数m=3)
// 输出：
// No1: 3          (第1个退出圈子的人编号是3)
// No2: 1	        (第2个退出圈子的人编号是1)
// No3: 5	        (第3个退出圈子的人编号是5)
// No4: 2	        (第4个退出圈子的人编号是2)
// Last No is: 4   (最后一个人的编号是4)

#include <stdio.h>
int main(void)
{
    int count, i, m, n, no;
    int num[50];
    int *p;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        num[i] = i + 1;
    p = num;
    no = 1;

    while (no < n) {
        count = 0;
        while (count < m) {
            if (p>=num+n) p = num;
            if (*p!=0) {
                count++;
            }
            p++;
        }
        printf("No%d: %d\n", no, *--p);
        no++;
        *p = 0;
        p++;
    }

    p = num;
    while(*p == 0) p++;
    printf("Last No is: %d\n", *p);
}