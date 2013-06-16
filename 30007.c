// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 输入三角形的3条边 a, b, c，如果能构成一个三角形，输出面积 area 和周长 perimeter(保留2位小数)；否则，输出"These sides do not correspond to a valid triangle"。
// 在一个三角形中，任意两边之和大于第三边。三角形面积计算公式：area = (s(s-a)(s-b)(s-c))^0.5 ，其中s = (a+b+c)/2
// 输出使用以下语句：
// printf("area = %.2f, perimeter = %.2f\n",area, perimeter);
// printf("These sides do not correspond to a valid triangle\n");
 
// 输入输出示例：括号内是说明
// 输入
// 2       (repeat=2) 
// 5 5 3   (a=5,b=5,c=3)
// 1 4 1   (a=1,b=4,c=1)
// 输出
// area = 7.15, perimeter = 13.00
// These sides do not correspond to a valid triangle

#include <stdio.h>
#include <math.h>
void main(void)
{
    int a, b, c;
    int repeat, ri;
    double area, perimeter, s;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &a, &b, &c);
        if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
        	s=(a+b+c)/2.0;
        	area=pow(s*(s-a)*(s-b)*(s-c),0.5);
        	perimeter=a+b+c;
        	printf("area = %.2f, perimeter = %.2f\n",area, perimeter);
        } else {
			printf("These sides do not correspond to a valid triangle\n");
        }
    }
}