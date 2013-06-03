// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个正整数 n (1<n<=10)，然后输入 n 个字符串，输出其中最长的字符串，如果字符串的长度相同，则输出先输入的字符串。
// 输入输出示例：括号内为说明
// 输入：
// 3              （repeat=3）
// 5               （n=5）
// melon peach pear strawberry orange
// 3               （n=3）
// pear berry orange 
// 4               （n=4）
// melon peach pear apple
// 输出：
// The longest is: strawberry
// The longest is: orange
// The longest is: melon

#include <stdio.h>
#include <string.h>
int main(void)
{
    char sx[80], longest[80];
    int i, n;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        scanf("%s", sx);
        n--;
        strcpy(longest,sx);
        while (n>0) {
        	scanf("%s", sx);
        	if (strlen(sx)>strlen(longest)) strcpy(longest,sx);
        	n--;
        }
        printf("The longest is: %s\n", longest);
	}
}   