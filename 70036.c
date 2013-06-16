// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个以回车结束的字符串（少于80个字符），把字符串中的所有数字字符('0'～'9')转换为整数，去掉其他字符。例如，字符串"3a56bc"转换为整数后是356。
// 输入输出示例：括号内为说明
// 输入：
// 2	(repeat=2)
// 82jeep5
// free
// 输出：
// 825
// 0

#include <stdio.h>     
#include <math.h>
#include <string.h>
int main(void)
{
    char str[80];
    int i, s, k;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((str[i] = getchar( )) != '\n') {
            if (str[i]>='0'&&str[i]<='9') i++; 
        }
        str[i] = 0;
        s=0;
        for (k=1; k<=i; k++) s+=pow(10,k-1)*(str[i-k]-'0');
	    printf("%d\n",s);
    }
}