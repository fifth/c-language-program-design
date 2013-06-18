// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 n，再输入 n 个学生的百分制成绩，统计各等级成绩的个数。成绩等级分为五级，分别为A(90-100)、B(80-89)、C(70-79)、D(60-69)和E(0-59)。
// 输入输出示例：括号内是说明
// 输入
// 5  	(n=5)
// 77 54 92 73 60
// 输出
// Number of A(90-100): 1
// Number of B(80-89): 0
// Number of C(70-79): 2
// Number of D(60-69): 1
// Number of E(0-59): 1

#include <stdio.h>
int main(void)
{
    int i, mark, n;
    int na, nb, nc, nd, ne;
	
    scanf("%d",&n);
    na = nb = nc = nd = ne = 0;
    for(i = 1; i <= n; i++){
        scanf("%d", &mark);
        if (mark>=90&&mark<=100) na++;
        else if (mark>=80&&mark<=89) nb++;
        else if (mark>=70&&mark<=79) nc++;
        else if (mark>=60&&mark<=69) nd++;
        else if (mark>=0&&mark<=59) ne++;
    }
    printf("Number of A(90-100): %d\n", na);
    printf("Number of B(80-89): %d\n", nb);
    printf("Number of C(70-79): %d\n", nc);
    printf("Number of D(60-69): %d\n", nd);
    printf("Number of E(0-59): %d\n", ne);
}