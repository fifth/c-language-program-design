// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
// 将一笔零钱（大于8分，小于1元, 精确到分）换成5分、2分和1分的硬币。
// 输入金额，问有几种换法？针对每一种换法，每种硬币至少有一枚，请输出各种面额硬币的数量和硬币的总数量。
// 要求：硬币面值按5分、2分、1分顺序，各类硬币数量依次从大到小的顺序，输出各种换法。
// 输出使用语句：printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",fen5, fen2, fen1, fen5+fen2+fen1);
// 输入输出示例：括号内为说明
// 输入：
// 2                   (repeat=2)
// 10                  (money=10分)
// 13                  (money=13分)
// 输出：
// fen5:1,fen2:2,fen1:1,total:4        
// fen5:1,fen2:1,fen1:3,total:5
// count = 2               (10分有2种换法)
// fen5:2,fen2:1,fen1:1,total:4
// fen5:1,fen2:3,fen1:2,total:6
// fen5:1,fen2:2,fen1:4,total:7
// fen5:1,fen2:1,fen1:6,total:8
// count = 4               (13分有4种换法)

#include "stdio.h"
int main(void)
{
    int count, fen1, fen2, fen5, money;
    int repeat, ri;


    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &money);
        count = 0;
        for (fen5 = money/5; fen5 >= 1; fen5--) {
        	for (fen2 = (money-fen5*5)/2; fen2>=1; fen2--) {
        		fen1 = money - fen5*5 - fen2*2;
        		if (fen1) {
        			printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n", fen5, fen2, fen1, fen5+fen2+fen1);
        			count++;
        		}
        	}
        }
    	printf("count = %d\n", count);
    }
}