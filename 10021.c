// 程序填空，不要改变与输入输出有关的语句。
// 输入若干有关颜色的英文单词，以#作为输入结束标志，对这些单词升序排列后输出。其中颜色的英文单词数数小于20个，颜色的英文单词长度均不超过10个字符。
// 输入输出示例：括号内为说明
// 输入：
// red
// blue
// yellow
// green
// purple
// #
// 输出：
// blue  green  purple  red  yellow  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;
   
    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));  
        strcpy(color[n], str);
	    n++;
        scanf("%s", str);
    }
    for (i = n-1; i > 0; i--) 
        for (j = 0; j < i; j++) 
            if (strcmp(color[j],color[j+1])>0) {
                temp = color[j];
                color[j] = color[j+1];
                color[j+1] = temp;
            }        
    for(i = 0; i < n; i++) 
        printf("%s  ", color[i]);
    printf("\n");
}