// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一行字符，以回车结束，统计其中单词的个数。各单词之间用空格分隔，空格数可以是多个。
// 输入输出示例：括号内是说明
// 输入
// 2   (repeat=2)
// Let's  go   to room  209.
//   Programming is fun
// 输出
// count = 5     ("Let's  go   to room  209."中有5个单词)
// count = 3     ("  Programming is fun"中有3个单词)

#include <stdio.h>
int main(void)
{
    char c;
    int count, word;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        count = 0;
        c = getchar();
        while (c!='\n') {
            while (c==' ') c = getchar();
            if (c!='\n') {
                count++;
                while (c!='\n'&&c!=' ') c = getchar();
            }
        }
        printf("count = %d\n", count);
    }
}