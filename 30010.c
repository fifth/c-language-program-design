// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入一个形式如"操作数 运算符 操作数"的表达式，对2个整数进行乘、除和求余运算。
// 输出使用以下语句：
// printf("%d * %d = %d\n", x, y, x * y);
// printf("%d / %d = %d\n", x, y, x / y);
// printf("%d Mod %d = %d\n",x, y, x % y);
// printf("Invalid operator\n");

// 输入输出示例：括号内是说明
// 输入
// 4	(repeat=4)
// 21*8
// 21/8
// 21%8
// 21!8
// 输出
// 21 * 8 = 168
// 21 / 8 = 2
// 21 Mod 8 = 5
// Invalid operator

#include <stdio.h>
int main(void)
{
    char sign;
    int x, y; 
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1;ri <= repeat; ri++){
        scanf("%d%c%d", &x, &sign, &y);
		switch (sign) {
			case '*':
				printf("%d * %d = %d\n", x, y, x * y);
				break;
			case '/':
				printf("%d / %d = %d\n", x, y, x / y);
				break;
			case '%':
				printf("%d Mod %d = %d\n", x, y, x % y);
				break;
			default:
				printf("Invalid operator\n");
				break;
		}
    }
}