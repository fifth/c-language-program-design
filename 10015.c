// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 输入两个整数m和n(m>=0且n>=0)，输出函数Ack(m,n)的值。
// 在m>=0和n>=0时Ack(m, n)定义为：
//  Ack(0,n) = n+1
//  Ack(m,0) = Ack(m-1,1)
//  Ack(m,n) = Ack(m-1, Ack(m,n-1))  m>0且n>0
// 例：括号内是说明
// 输入
// 4   (repeat=4) 
// 0 3
// 2 0
// 2 3
// 0 0
// 输出
// Ackerman(0,3)=4
// Ackerman(2,0)=3
// Ackerman(2,3)=9
// Ackerman(0,0)=1

#include <stdio.h>
int Ack(int m, int n);
int main(void)
{
   int m,n;
   int result;
   int i,repeat;

   scanf("%d",&repeat);
   for(i=1; i<=repeat; i++)
   {
       scanf("%d%d", &m, &n);
       result = Ack(m,n);
       printf("Ackerman(%d,%d)=%d\n", m, n, result);
   }
}
int Ack(int m, int n) {
  if (m==0) return n+1;
  else if (n==0) return Ack(m-1,1);
  else return Ack(m-1,Ack(m,n-1));
}