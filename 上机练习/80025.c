// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个字符串(长度不超过80)，判断该字符串是否为“回文”。“回文”是指顺读和倒读都一样的字符串，如“XYZYX”和“xyzzyx”。
// 要求定义并调用函数 mirror(p)判断字符串 p 是否为“回文”，如果 p 是回文字符串，返回1，否则，返回0，函数形参 p 的类型是字符指针，函数类型是 int。
// 输入输出示例：括号内为说明
// 输入：
// 2	  (repeat=2)
// abcddcba
// abcddcb
// 输出：
// YES
// NO

#include <stdio.h>
#include <string.h>
void main()
{
    char s[80];
    int repeat, ri;
    int mirror(char *p);
 
    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(s);
        if(mirror(s) != 0)
      	    printf("YES\n");
        else
            printf("NO\n");
    }
}
int mirror(char *p) {
    int i;
    for (i = 0; i < strlen(p) / 2; i++) 
        if (p[i]!=p[strlen(p)-1-i]) return 0;
    return 1;
}