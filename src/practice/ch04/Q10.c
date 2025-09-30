#include <stdio.h>

// 프로그램 설명: 챕터4 연습문제(소수점이 포함된 2개의 값을 입력 받아 합과 평균 구하기)
// 작성일: 2025/09/30
// 작성자: Hyunwoo

int main(void) {

    float num1 = 0.0F;
    float num2 = 0.0F;

    float sum = 0.0F;
    float avg = 0.0F;

    printf("첫 번째 소수를 입력해 주세요 : ");
    scanf_s("%f", &num1);

    printf("두 번째 소수를 입력해 주세요 : ");
    scanf_s("%f", &num2);

    sum = num1 + num2;
    avg = sum / 2.0F;

    printf("합은 %.2f 입니다", sum);
    printf("평균은 %.2f 입니다", avg);

    return 0;
}
