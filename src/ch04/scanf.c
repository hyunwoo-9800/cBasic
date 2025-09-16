#include <stdio.h>

// 프로그램 설명: scanf함수를 사용한 입력
// 작성일: 2025/09/16
// 작성자: Hyunwoo

int main(void) {
    
    //int intValue = 0;

    //printf("정수 값을 입력해주세요: ");
    //scanf_s("%d", &intValue);
    //printf("입력하신 값은: %d 입니다.\n\n", intValue);

    //float flaotValue = 0.0F;

    //printf("실수 값을 입력해주세요: ");
    //scanf_s("%f", &flaotValue);
    //printf("입력하신 값은: %f 입니다.\n\n", flaotValue);

    //// 부호없는 10진수
    //int x = 0;
    //unsigned int y = 0;

    //printf("정수 값을 입력해주세요: ");
    //scanf_s("%d", &x);
    //printf("입력하신 값은: %d 입니다.\n\n", x);

    //printf("부호 없는 정수 값을 입력해주세요: ");
    //scanf_s("%u", &y);
    //printf("입력하신 값은: %u 입니다.\n\n", y);

    //// 문자값 입력
    //char ch = ' ';

    //printf("문자를 하나 입력해주세요: ");
    //scanf_s(" %c", &ch, (unsigned)1);
    //printf("문자 그대로: %c\n", ch);     // 문자 출력
    //printf("아스키 코드값: %d\n\n", ch); // 정수 출력

    //// 부동 소수점, double 값 입력
    //double doubleValue = 0.0;

    //printf("실수 값을 입력해주세요: ");
    //scanf_s("%lf", &doubleValue);
    //printf("입력하신 값은: %e 입니다.\n\n", doubleValue);

    //// 16진수의 입력
    //int hex = 0;

    //printf("16진수 값을 입력해주세요: ");
    //scanf_s("%x", &hex);
    //printf("입력하신 값은: %x 입니다.\n\n", hex);

    // 문자열의 입력
    char string[100];

    printf("문자열을 입력해주세요: ");
    fgets(string, sizeof(string), stdin);
    //scanf_s("%s", string, (unsigned)_countof(string));

    puts(string);

    return 0;
}
