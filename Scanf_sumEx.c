#include <stdio.h>

void main(void)
{

	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = 0;
	double average = 0;

	printf("국어 점수를 입력하세요 :");
	scanf_s("%d", &kor);

	printf("영어 점수를 입력하세요 :");
	scanf_s("%d", &eng);

	printf("수학 점수를 입력하세요 :");
	scanf_s("%d", &math);

	total = kor + eng + math;
	average = total / 3.;

	printf("합계 점수 : %d\n", total);
	printf("평균 점수 : %f\n", average);

} // main 종료