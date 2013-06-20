// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 依次以十进制、八进制和十六进制形式输入三个整数，输出每个整数的十进制、八进制和十六进制形式。
// 输入输出示例：括号内是说明
// 输入：
// 1          (repeat=1)
// 31 11 1a   (十进制数31，八进制数11，十六进制数1a)
// 输出：
// The decimal is 31, the octal is 37, the hexadecimal is 1f.  (十进制数31的十进制、八进制和十六进制形式是31, 37, 1f)
// The decimal is 9, the octal is 11, the hexadecimal is 9.   （八进制数11的十进制、八进制和十六进制形式是9, 11, 9)
// The decimal is 26, the octal is 32, the hexadecimal is 1a. （十六进制数1a的十进制、八进制和十六进制形式是26, 32, 1a)

#include <stdio.h>
int main(void)
{
    int decimal, octal, hexadecimal;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%o%x", &decimal, &octal, &hexadecimal);
        printf("The decimal is %d, the octal is %o, the hexadecimal is %x.\n", decimal, decimal, decimal);
		printf("The decimal is %d, the octal is %o, the hexadecimal is %x.\n", octal, octal ,octal);
		printf("The decimal is %d, the octal is %o, the hexadecimal is %x.\n", hexadecimal, hexadecimal, hexadecimal);
    }
}
