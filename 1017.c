#include <stdio.h>

// 여기서 c일때는 준 수를 반지름으로 하는 원그리기 기능 추가하고 오류문은 엘스로 빼라 지금은 시간없음 

int main() {

    char t;
    int x =0;

    printf("Input char and number : ");
    scanf("%c %d",&t,&x);

    if (t=='c') {
        printf("Invalid type\n");
    }
    else if (t=='s') {
        for (int i=0; i<x; i++) {
            for (int j=0; j<x; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}