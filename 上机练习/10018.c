// 程序填空，不要改变与输入输出有关的语句。
// 用递归方法实现对一个整数进行逆序输出。
// 例：(括号内为说明)
// 输入
// 3	(repeat=3)
// 567
// 911
// 8
// 输出
// 765
// 119
// 8

#include <stdio.h>
void reverse(int n);
int main(void)
{
	int n,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&n);
		reverse(n);
		printf("\n");
	}
}
void reverse(int n) {
	printf("%d", n%10);
	if (n/10!=0) reverse(n/10);
}