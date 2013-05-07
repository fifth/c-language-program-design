// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入一个以回车结束的字符串（少于80个字符），滤去所有的非十六进制字符后，组成一个新字符串（十六进制形式），然后将其转换为十进制数后输出。
// 输入输出示例：括号内为说明
// 输入：
// 2	(repeat=2)
// 10
// +A
// 输出：
// Dec = 16
// Dec = 10

#include "stdio.h"
#include "string.h"
#include "math.h"
#define MAXLEN 80
int main(void)
{  
    char ch;
    char str[MAXLEN];
    int i, k, num[MAXLEN];
    int repeat, ri;
    long number;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((ch = getchar()) != '\n'){
            str[i]=ch;
            if (!((ch>='0'&&ch<='9')||(ch>='A'&&ch<='F')||(ch>='a'&&ch<='f'))) i--;
            i++;
        }
        str[i] = 0;
        for (k=0; k<i; k++) {
            if (str[k]>='0'&&str[k]<='9') num[k]=str[k]-'0';
            if (str[k]>='A'&&str[k]<='F') num[k]=str[k]-'A'+10;
            if (str[k]>='a'&&str[k]<='f') num[k]=str[k]-'a'+10;
        }
        number=0;
        for (k=1; k<=i;k++) {
            number=number+pow(16,k-1)*num[i-k];
        }
      	printf("Dec = %ld\n",number);
    }
}