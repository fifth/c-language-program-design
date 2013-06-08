// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数 n（3<n≤10），再输入 n 个学生的信息，包括学号、姓名和3门课程的成绩，输出总分最高学生的姓名和总分。
// 输入输出示例：括号内为说明
// 输入：
// 5	(n=5)
// 1 黄岚 78  83  75
// 2 王海 76  80  77
// 3 沈强 87  83  76
// 4 张枫 92  88  78
// 5 章盟 76  81  75
// 输出： 
// 总分最高的学生是: 张枫，258分

#include <stdio.h>
int main (void)
{  
    int i, j, k, max_index, n;
    struct student{
        int number;
        char name[20];
        int score[3];
        int sum;
    }stu[10];

    scanf("%d", &n);
    max_index = 0;
    for (i = 0; i < n; i++) {
    	scanf("%d%s%d%d%d", &stu[i].number, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
    	stu[i].sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
    	if (stu[i].sum > stu[max_index].sum) max_index = i;
    }
    printf("总分最高的学生是: %s，%d分\n", stu[max_index].name, stu[max_index].sum);
}