// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入五级制成绩(A－E)，输出相应的百分制成绩(0－100)区间，要求使用switch语句。
// 五级制成绩对应的百分制成绩区间为：A(90-100)、B(80-89)、C(70-79)、D(60-69)和E(0-59),如果输入不正确的成绩，显示"Invalid input"。
// 输出使用以下语句：
// printf("90-100\n"); 
// printf("80-89\n"); 
// printf("70-79\n"); 
// printf("60-69\n");
// printf("0-59\n");
// printf("Invalid input\n");

// 输入输出示例：括号内是说明
// 输入
// 6ABCDEj   	(repeat=6，输入的五级成绩分别为A、B、C、D、E和无效的字符j) 
// 输出
// 90-100
// 80-89
// 70-79
// 60-69
// 0-59
// Invalid input  	(输入数据不合法)

#include <stdio.h>
void main(void)
{
    char ch;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        ch = getchar();
        switch (ch) {
        	case 'A':
        		printf("90-100\n");
        		break;
        	case 'B':
				printf("80-89\n"); 
				break;
			case 'C':
				printf("70-79\n"); 
				break;
			case 'D':
				printf("60-69\n");
				break;
			case 'E':
				printf("0-59\n");
				break;
			default:
				printf("Invalid input\n");
				break;
        }
    }
}