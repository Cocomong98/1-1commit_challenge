#include <stdio.h>

int main () {

    int max=0, min=0, x=0;
    int testeof =0;


// ^Z입력 전까지 반복하는 반복문 만들기
// 숫자 입력받아 min max 여부 판별

    while (1) {
        printf("Input number or EOF : ");
        scanf("%d",&x);
        testeof = scanf("%d",&x);
        if (testeof == EOF) break;

        else {
            if (x<=min) min=x;
            else if (x>max) max=x; 

            printf ("MAX : %d, MIN : %d\n",max,min);
        }
    }

    return 0;
}