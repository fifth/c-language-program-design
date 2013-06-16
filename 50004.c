// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 给定平面任意两点坐标 (x1, y1) 和 (x2, y2)，求这两点之间的距离(保留2位小数)。
// 要求定义和调用函数 dist(x1, y1, x2, y2)计算两点间的距离，函数形参x1、y1、x2和y2的类型都是double，函数类型是double。
// 输入输出示例：括号内是说明
// 输入
// 1               (repeat=1)
// 10 10           (x1=10, y1=10)
// 200 100         (x2=200, y2=100)
// 输出
// Distance = 210.24

#include <stdio.h>
#include <math.h>
double dist(double x1, double y1, double x2, double y2);
int main(void)
{
    int repeat, ri;
    double distance, x1, y1, x2, y2;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
		distance=dist(x1,y1,x2,y2);
        printf("Distance = %.2f\n", distance);
    }
}
double dist(double x1, double y1, double x2, double y2) {
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}