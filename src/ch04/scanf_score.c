#include <stdio.h>

// 프로그램 설명: 성적 입력 프로그램
// 작성일: 2025/09/16
// 작성자: Hyunwoo

int main(void) {
   
    int kor = 0;            // 국어 점수
    int eng = 0;            // 영어 점수
    int math = 0;           // 수학 점수

    int total = 0;          // 점수 총합
    double average = 0.0;   // 평균

    printf("국어 점수를 입력하세요 : ");
    scanf_s("%d", &kor);

    printf("영어 점수를 입력하세요 : ");
    scanf_s("%d", &eng);

    printf("수학 점수를 입력하세요 : ");
    scanf_s("%d", &math);

    total = kor + eng + math;
    average = total / 3.;

    printf("합계 점수 : %d\n", total);
    printf("평균 점수 : %f\n", average);

    return 0;
}
