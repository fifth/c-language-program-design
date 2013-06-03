// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个字符串 t 和一个正整数 m，将字符串 t 中从第 m 个字符开始的全部字符复制到字符串 s 中，再输出字符串 s。
// 要求定义并调用函数 strmcpy(s,t,m), 它的功能是将字符串 t 中从第 m 个字符开始的全部字符复制到字符串 s 中，函数形参s和t的类型是字符指针，形参m的类型是int，函数类型是void。
// 输入输出示例：括号内为说明
// 输入：
// 3              (repeat=3）
// happy new year
// 7
// happy
// 1
// new
// 4
// 输出：
// new year        (从"happy new year"第7个字符开始组成的新字符串为"new year"）
// happy           (从"happy"第1个字符开始组成的新字符串为"happy"）
// error input     ("new"的长度小于4）

#include <stdio.h>
#include <string.h>
void main()
{
    char s[80], t[80];
    int m;
    int repeat, ri;
    void strmcpy(char *s, char *t, int m);

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(t);
        scanf("%d", &m);
        getchar();
        if(strlen(t) < m)
            printf("error input");
        else{
            strmcpy(s, t, m);
            puts(s);
        }
    }
}
void strmcpy(char *s, char *t, int m) {
    int i,j=0;
    for (i = m-1; i < strlen(t); i++) 
        s[j++]=t[i];
    s[j]=0;
}