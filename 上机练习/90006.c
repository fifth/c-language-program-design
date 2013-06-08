// 程序填空，不要改变与输入输出有关的语句。
// 输入n(n<10)个朋友的信息，包括姓名、生日、电话号码，按照年龄从大到小的顺序依次输出通讯录。
// 输入输出示例：括号内为说明
// 输入：
// 3	(n=3)
// zhang  19850403  13912345678
// wang  19821020  0571-88018448
// qian  19840619  13609876543
// 输出：
// wang 19821020 0571-88018448
// qian 19840619 13609876543
// zhang 19850403 13912345678

#include <stdio.h>
int main (void)
{  
    int i, index, j, n;
    struct address_list{
        char name[20];
        long birthday;
        char phone[20];
    }temp, friends[10];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%s%ld%s", friends[i].name, &friends[i].birthday, friends[i].phone);
    for (i = n-1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            if (friends[j].birthday>friends[j+1].birthday) {
                temp = friends[j];
                friends[j] = friends[j+1];
                friends[j+1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
        printf("%s %ld %s\n", friends[i].name, friends[i].birthday, friends[i].phone);
}