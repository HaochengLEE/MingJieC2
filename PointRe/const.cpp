//
// Created by 李昊城 on 2019/9/19.
//

#include <stdio.h>
int main(){
    int i[]={24,36};
    int a=18;
    int * const q=i;
    int * const p=&a;
    //使用const关键字之后，不能通过q和p去做修改。可以通过i和a修改。
    printf("%d\n",*q);
    printf("%d\n",a);
    a=36;
    printf("%d\n",a);
    return 0;
}
