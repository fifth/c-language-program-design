// 程序填空，不要改变与输入输出有关的语句。
// 查询水果的单价。有4种水果，苹果(apples)、梨(pears)、桔子(oranges)和葡萄(grapes)，单价分别是3.00元/公斤，2.50元/公斤，4.10元/公斤和10.20元/公斤。
// 在屏幕上显示以下菜单(编号和选项)，用户可以连续查询水果的单价，当查询次数超过5次时，自动退出查询；不到5次时，用户可以选择退出。
// 当用户输入编号1～4，显示相应水果的单价(保留1位小数)；输入0，退出查询；输入其他编号，显示价格为0。
// 输入输出示例：括号内是说明
// 输入
// 3   (oranges的编号) 
// 0   (退出查询) 
// 输出
// [1] apples
// [2] pears
// [3] oranges
// [4] grapes
// [0] Exit
// price = 4.1
// [1] apples
// [2] pears
// [3] oranges
// [4] grapes
// [0] Exit

#include <stdio.h>
void main(void)
{
    int choice, i;
    double price;

    for(i = 1; i <= 5; i++){
        printf("[1] apples\n");
        printf("[2] pears\n");
        printf("[3] oranges\n");
        printf("[4] grapes\n");
        printf("[0] Exit\n");
        scanf("%d", &choice);
        if(choice == 0)
            break;
        else{
            switch (choice) {
                case 1:
                    price = 3.00;
                    break;
                case 2:
                    price = 2.50;
                    break;
                case 3:
                    price = 4.10;
                    break;
                case 4:
                    price = 10.20;
                    break;
                default:
                    break;
            }
            printf("price = %0.1f\n", price);
        }
   }
}