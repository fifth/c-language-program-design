// 程序填空，不要改变与输入输出有关的语句。
// 验证哥德巴赫猜想：任何一个大于6的偶数均可表示为两个素数之和。例如6=3+3，8=3+5，…，18=7+11。
// 输入两个正整数 m 和 n(6<=m, n<=100)，将 m 到 n 之间的偶数表示成两个素数之和，打印时一行打印5组。
// 输出使用语句：printf("%d=%d+%d ", number, i, number - i);

// 输入输出示例：括号内为说明
// 输入：
// 89 100  (m=90, n=100)
// 输出：
// 90=7+83 92=3+89 94=5+89 96=7+89 98=19+79
// 100=3+97

#include "stdio.h"
#include "math.h"
int main(void)
{
    int count, i, j, k, m, n, number;
    int find(int n);

    scanf("%d%d", &m, &n);
    if(m % 2 != 0) m = m + 1;
    if(m >= 6){
    	count = 0;
    	for (;m <= n; m+=2){
    		for (i = 2; i <= m/2; i++) {
    			if (find(i)&&find(m-i)) {
    				printf("%d=%d+%d", m, i, m-i);
    				count++;
    				if (count%5 ==0) {
    					printf("\n");
    				} else {
    					printf(" ");
    				}
    				i = m;
    			}
    		}
    	}
    }
}

int find(int n) {
	int i;
	for (i = 2; i <= n/2; i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}