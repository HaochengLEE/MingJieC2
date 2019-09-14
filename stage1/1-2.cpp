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
            b = 0+rand()%10;
            switch (b) {
                case 0: {
                    printf("大吉\n");
                    break;
                }
                case 1: {
                    printf("中吉\n");
                    break;
                }
                case 2: {
                    printf("小吉\n");
                    break;
                }
                case 3: {
                    printf("吉\n");
                    break;
                }
                case 4: {
                    printf("末吉\n");
                    break;
                }
                case 5: {
                    printf("凶\n");
                    break;
                }
                case 6: {
                    printf("大凶\n");
                    break;
                }
                case 7: {
                    printf("大吉\n");
                    break;
                }
                case 8: {
                    printf("小吉\n");
                    break;
                }
                case 9: {
                    printf("吉\n");
                    break;
                }
                case 10: {
                    printf("末吉\n");
                    break;
                }
            }
        }
        printf("按1继续开始抽签\n");
        scanf("%d",&a);
    }while (a==1);


    return 0;

}