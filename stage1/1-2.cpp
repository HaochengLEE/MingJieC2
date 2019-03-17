#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
    printf("按1开始抽签\n");

    int a;
    srand(time(NULL));
    scanf("%d",&a);
    do{int b;
        if(a==1) {
            b = 0+rand()%6;
            switch (b) {
                case 0: {
                    printf("上上签\n");
                    break;
                }
                case 1: {
                    printf("上签\n");
                    break;
                }
                case 2: {
                    printf("中上签\n");
                    break;
                }
                case 3: {
                    printf("中签\n");
                    break;
                }
                case 4: {
                    printf("中下签\n");
                    break;
                }
                case 5: {
                    printf("下签\n");
                    break;
                }
                case 6: {
                    printf("下下签\n");
                    break;
                }
            }
        }
        printf("按1继续开始抽签\n");
        scanf("%d",&a);
    }while (a==1);


    return 0;

}