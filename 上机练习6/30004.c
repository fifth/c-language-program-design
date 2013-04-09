#include <stdio.h>
void main(void)
{
    char ch;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        ch = getchar();
        switch (ch) {
        	case 'A':
        		printf("90-100\n");
        		break;
        	case 'B':
				printf("80-89\n"); 
				break;
			case 'C':
				printf("70-79\n"); 
				break;
			case 'D':
				printf("60-69\n");
				break;
			case 'E':
				printf("0-59\n");
				break;
			default:
				printf("Invalid input\n");
				break;
        }
    }
}