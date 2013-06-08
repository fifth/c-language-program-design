// 程序填空，不要改变与输入输出有关的语句。
// 输入2个整数，分别将其逆向输出。
// 要求定义并调用函数 fun(n),它的功能是返回 n 的逆向值，函数形参 n 的类型是int，函数类型是int。例如，fun(123)的返回值是321。
// 输入输出示例：括号内是说明
// 输入：
// 123
// -910
// 输出：
// 123的逆向是321
// -910的逆向是-19

#include <stdio.h>
int fun(int n);
int main(void)
{	
    int m1,m2;

    scanf("%d%d", &m1, &m2);
    printf("%d的逆向是%d\n", m1, fun(m1));  
    printf("%d的逆向是%d\n", m2, fun(m2));  

}
int fun(int n) {
	int temp = 0,flag;
	flag = n<0?-1:1;
	n = n<0?-n:n;
	do {
		temp = temp*10 + n%10;
		n /= 10;
	} while (n!=0);
	return temp*flag;
}