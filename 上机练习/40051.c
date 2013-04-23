// 程序填空，不要改变与输入输出有关的语句。
// 输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
// 从键盘输入一批学生的成绩(以负数为结束标志)，计算平均分(保留2位小数)，并统计不及格成绩的个数。
// 输入输出示例：括号内为说明
// 输入
// 2           (repeat=2)
// 67 88 73 54 82 –3
// 8 7 4 3 70 5 6 100 -1
// 输出
// Grade average is 72.80,the number of fail is 1
// Grade average is 25.38,the number of fail is 6

#include <stdio.h>
int main(void)
{
    int fail, num;               	
    int repeat, ri;
    double grade, total; 	

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
    	scanf ("%lf", &grade);
    	total=0;
    	num=0;
    	fail=0;
    	while (grade>=0) {
    		total+=grade;
    		num++;
    		if (grade<60) {
    			fail++;
    		}
    		scanf("%lf", &grade);
    	}
       	if(num > 0)
        	printf("Grade average is %.2f,the number of fail is %d\n", total/num, fail);
    }
}