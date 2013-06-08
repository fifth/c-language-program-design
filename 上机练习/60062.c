
#include <stdio.h>
int main(void)
{
    char operator;
    int operand1, operand2, res;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &operand1);
        operator = getchar();
		while (operator!='=') {
			scanf("%d", &operand2);
			switch (operator) {
				case '+':
					operand1 += operand2;
					break;
				case '-':
					operand1 -= operand2;
					break;
				case '*':
					operand1 *= operand2;
					break;
				case '/':
					operand1 /= operand2;
					break;
				default:
					break;
			}
			operator = getchar();
		}
		res = operand1;
        printf("%d\n", res);
   }
}