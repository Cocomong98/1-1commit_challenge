#include <stdio.h>

// 이 이중루프 배우는거 엄청 중요하다 반드시 스스로 풀자 이거 !

/*

    1   // row 1
   12   // row 2
  123   // row 3
 1234   // row 4
12345   // row 5

*/

int main()
{
    int width = 0;
    int row = 0, col = 0;

    // read the width of the triangle
    printf("Input the width of triangle: ");
    scanf("%d", &width);

    for (row=1; row<=width; row++) {
        for (row=1; row<=width-row; row++) {
            printf(" ");
        }
        for (row=1; row<=width; row++) {
            printf("%d",row);
        }
        printf("\n");
    }

    return 0;
}
        // print numbers from 1 to row