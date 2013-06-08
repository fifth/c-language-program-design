// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 模拟简单运算器的工作：输入一个算式（没有空格），遇等号 "=" 说明输入结束，输出运算结果。
// 假设计算器只能进行加、减、乘、除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。
// 输入输出示例：括号内是说明
// 输入
// 2             (repeat=2)
// 15+2/3=
// 1+2*10-10/2=
// 输出
// 5
// 10 

#include <stdio.h>
int main(void)
{
    char operator;
    int operand1, operand2, res;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &operand1);
        operator = getchar();
		while (operator!='=') {
			scanf("%d", &operand2);
			switch (operator) {
				case '+':
					operand1 += operand2;
					break;
				case '-':
					operand1 -= operand2;
					break;
				case '*':
					operand1 *= operand2;
					break;
				case '/':
					operand1 /= operand2;
					break;
				default:
					break;
			}
			operator = getchar();
		}
		res = operand1;
        printf("%d\n", res);
   }
}