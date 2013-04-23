// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个整数 in，求它的位数以及各位数字之和。例如 123 的各位数字之和是 6，位数是 3。
// 输入输出示例：括号内是说明
// 输入
// 4        (repeat=4) 
// 0        (in=0) 
// 23456    (in=23456) 
// -100     (in=-100) 
// -1       (in=-1) 
// 输出
// count = 1, sum = 0  (0的位数是1, 各位数字之和是0)
// count = 5, sum = 20     (23456的位数是5, 各位数字之和是20)
// count = 3, sum = 1  (-100的位数是3, 各位数字之和是1)
// count = 1, sum = 1  (-1的位数是1, 各位数字之和是1)

#include <stdio.h>
int main(void)
{
    int count, in, sum;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
        if (in < 0) {
        	in = -in;
        }
        sum = 0;
        count = 0;
        do {
        	sum += in%10;
        	count++;
        } while (in /= 10);
        printf("count = %d, sum = %d\n", count, sum);
    }
}