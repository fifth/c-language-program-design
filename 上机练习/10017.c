// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 用递归方法编写求Fabonacci数列项的函数，返回值为长整型, 并写出相应的主函数。Fabonacci数列的定义为：
//    f(n)=f(n-2)+f(n-1)  (n>=2)   其中 f(0)=0，f(1)=1。
// 例：(括号内为说明)
// 输入
// 3	(repeat=3)
// 0
// 1
// 6
// 输出
// fib(0)=0
// fib(1)=1
// fib(6)=8

#include <stdio.h>
long fib(int n);
int main(void)
{
	int n,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&n);
		printf("fib(%d)=%ld\n",n,fib(n));
	}
}
long fib(int n) {
	if (n==1||n==0) return n;
	else return fib(n-1)+fib(n-2);
}