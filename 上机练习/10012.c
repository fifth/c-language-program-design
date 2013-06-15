// 程序填空，不要改变与输入输出有关的语句。
// 编写一个函数，利用参数传入一个3位数number，找出101～number之间所有满足下列两个条件的数：
// 它是完全平方数，又有两位数字相同，如144、676等，函数返回找出这样的数据的个数。请同时编写主函数。
// 例：(括号内为说明)
// 输入
// 3	(repeat=3)
// 150
// 500
// 999
// 输出
// count=2
// count=6
// count=8

#include <stdio.h>
#include <math.h>
int search(int n);
int main(void)
{
	int number,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		do{
			scanf("%d",&number);
		}while(number<101||number>999);
		printf("count=%d\n",search(number));
	}
}
int search(int n) {
	int sum = 0;
	int i = 10, a, b, c;
	do {
		a = i*i%10;
		b = i*i/10%10;
		c = i*i/100;
		if ((a==b||b==c||c==a)&&(i!=10)) sum++;
		i++;
	} while(i*i<=n);
	return sum;
}