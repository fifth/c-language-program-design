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