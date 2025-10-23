#include <stdio.h>

// 프로그램 설명: 관계 연산자 응용 프로그램
// 작성일: 2025/10/23
// 작성자: Hyunwoo

int main(void) {

    int op = 0;

    op = 3 < 5;

    printf("3 < 5  :  %d \n",op);
    printf("3 <= 5 :  %d \n", 3 <= 5);
    printf("5 < 3  :  %d \n", 5 < 3);
    printf("5 <= 3 :  %d \n", 5 <= 3);
    printf("3 == 5 :  %d \n", 3 == 5);
    printf("3 != 5 :  %d \n", 3 != 5);

    return 0;
}
