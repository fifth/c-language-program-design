// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 皮球从 height（米）高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第 n 次落地时，在空中一共经过多少距离？第 n 次反弹的高度是多少？(输出保留1位小数) 
// 输入输出示例：括号内是说明
// 输入
// 3       (repeat=3)
// 10  2       (height=10m, n=2)
// 4   1       (height=2m, n=1)
// 100 8       (height=100m, n=8)
// 输出
// distance=20.0, height=2.5   (第2次落地时，空中经过距离为20米, 第2次反弹高度为2.5米)
// distance=4.0, height=2.0    (第1次落地时，空中经过距离为4米，第1次反弹高度为2米)
// distance=298.4, height=0.4  (第8次落地时，空中经过距离为298.4米，第8次反弹高度为0.4米)

#include <stdio.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double distance, height;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &height, &n);
        i = 2;
        distance = height;
        height /= 2.0;
        while (i <= n && n >= 2) {
        	distance += height*2;
        	i++;
        	height /= 2.0;
        }
      	printf("distance = %.1f, height = %.1f\n", distance, height);
    }
}