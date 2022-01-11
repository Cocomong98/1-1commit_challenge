#include <stdio.h> 

int main() {
    int i=0;

    // printf("%d\n",number[0]); // 문자의 아스키코드값을 출력

    // printf("%x\n",number[0]); // %x는 숫자를 10진수로 받아들여서 16진수로 바꿔줌
    // printf("%o\n",number[0]); // %o는 숫자를 10진수로 받아들여서 8진수로 바꿔줌

    scanf("id = %d",&i);
    printf("%d\n",i);

    return 0;
}