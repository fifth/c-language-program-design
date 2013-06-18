// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个整数 in，求它的位数。例如123的位数是3。请使用do-while语句实现循环。
// 输入输出示例：括号内是说明
// 输入
// 4        (repeat=4) 
// 12345    (in=12345) 
// -100     (in=-100) 
// -1       (in=-1) 
// 1290     (in=1290) 
// 输出
// count = 5 	(12345的位数是5)
// count = 3 	(-100的位数是3)
// count = 1 	(-1的位数是1)
// count = 4 	(99的位数是2)

#include <stdio.h>
int main(void)
{
    int count, in;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
     	scanf("%d", &in);
     	count = 0;
		do {
			in/=10;
			count++;
		} while (in!=0);
     	printf("count = %d\n", count);
   }
}