#include <stdio.h>

// 프로그램 설명: 출력 예제
// 작성일: 2025/09/09
// 작성자: Hyunwoo

int main(void) {

    printf("안녕하세요! \n");
    printf("This is a computer. \n");
    printf("C 언어 길라잡이 - 정보문화사 \n\n");

    printf("안녕하세요!");
    printf("This is a computer.");
    printf("C 언어 길라잡이 - 정보문화사 \n\n");

    int i = 5;
    int j = 10;
    int n = 27;

    printf("i의 값은? %d \n\n", i);
    printf("i의 값은? %d \nj의 값은? %d \n", i, j);
    printf("10진수 %d은 16진수로 %x 입니다. \n\n", n, n);

    // 정수형 변수의 출력
    int x = 5;
    int y = -100;

    printf("x의 값은? %d \ny의 값은? %u \n\n", x, y);

    // 문자형 변수의 출력
    char ch = 'A';
    printf("ch는? %c\n", ch);
    printf("ch는? %d\n\n", ch);

    // 실수 값의 출력
    printf("%f\n", 3.141592);
    printf("%e\n", 55.345);
    printf("%E\n\n", 55.345);

    // 문자열의 출력
    printf("%s", "안녕\n\n");

    // 삼각형 출력
    printf("*         \n");
    printf("**        \n");
    printf("***       \n");
    printf("****      \n");
    printf("*****     \n");

    return 0;
}
