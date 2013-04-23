// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 为了提倡居民节约用电，某省电力公司执行"阶梯电价"，安装一户一表的居民用户电价分为两个"阶梯"：月用电量50千瓦时以内的，电价为0.53元/千瓦时；超过50千瓦时的用电量，电价上调0.05元/千瓦时。
// 输入用户的月用电量e(千瓦时)，计算并输出该用户应支付的电费(元)，结果保留2位小数。
// 输入输出示例：括号内是说明
// 输入
// 2        (repeat=2)
// 10       (e=10) 
// 100      (e=100)    
// 输出
// cost = 5.30
// cost = 55.50

#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double cost, e;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &e);
		if (e<=50) {
			cost=e*0.53;
		} else {
			cost=50*0.53+(e-50)*0.58;
		}
        printf("cost = %.2f\n", cost);
    }
}
 