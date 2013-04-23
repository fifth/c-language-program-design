// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 某城市普通出租车收费标准如下："起步里程3公里，起步费10元；超起步里程但总里程在10公里内，每公里租费2元；
// 总里程超过10公里以上的部分加收50%的回空补贴费，即每公里租费3元。营运过程中，因路阻及乘客要求临时停车的，
// 每5分钟按1公里租费计收。运价计费尾数四舍五入，保留到元。"

// 编写程序，输入行驶里程(公里)与等待时间(分钟)，计算并输出乘客应支付的车费(元)。
// 提示:先将等待的时间折算成公里数，与原公里数相加后再处理。
// 输入输出示例：括号内是说明
// 输入
// 3       (repeat=3) 
// 1.6 2 52    (行驶1.6公里,等待2分52秒)
// 3.1 6 15    (行驶3.1公里,等待6分15秒)
// 11.8 2 30   (行驶11.8公里,等待2分30秒)
// 输出
// cost = 10
// cost = 13
// cost = 31

#include <stdio.h>
int main(void)
{
    int repeat, ri;
    int minutes, seconds;
    double cost, mile;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d%d", &mile, &minutes, &seconds);
        mile = mile+(minutes*60+seconds)*1.0/300;
        if (mile<=3) {
        	cost = 10;
        } else if (mile<=10) {
        	cost = 10+(mile-3)*2;
        } else if (mile>10) {
        	cost = 10+14+(mile-10)*3;
        }
		printf("cost = %.0f\n", cost);
    }
}
