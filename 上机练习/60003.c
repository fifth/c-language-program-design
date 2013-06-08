// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一行字符，以回车结束，统计出其中的英文字母、空格、数字和其他字符的个数。
// 输入输出示例：括号内是说明
// 输入
// 2                          (repeat=2)
// Reold building room 123.
// Programming is fun!
// 输出
// letter = 17, blank = 3, digit = 3, other = 1   ("Reold building room 123."中的英文字母、空格、数字和其他字符的个数)
// letter = 16, blank = 2, digit = 0, other = 1   ("Programming is fun!"中的英文字母、空格、数字和其他字符的个数)

#include <stdio.h>
int main(void)
{
    char c;
    int blank, digit, letter, other;
    int ri, repeat;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri<=repeat; ri++){
    	blank = digit = letter = other = 0;
        c = getchar();
		while (c!='\n') {
			if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')) letter++;
			else if (c>='0'&&c<='9') digit++;
			else if (c==' ') blank++;
			else other++;
      		c = getchar();
		}
        printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    }
}