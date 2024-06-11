#include <stdio.h>

int main()
{

	double a = 0;
	double b = 0;

	double sum = 0;
	double average = 0;

	printf("소수점 계산 테스트 입니다.\n");
	printf("소수점이 포함된 2개의 값을 입력해주세요.\n");
	
	printf("\n");

	printf("첫 번째 값을 입력해주세요.\n");
	scanf_s("%lf", &a);								//  문자열을 입력받을 때 double형일 경우 %lf를 사용한다.

	printf("두 번째 값을 입력해주세요.\n");
	scanf_s("%lf", &b);
	
	printf("\n");

	sum = a + b;			// 합계
	average = sum / 2.;		// 평균

	printf("두 값의 합은 : %f 이고, \n", sum);
	printf("평균은 : %f 입니다.", average);

} // main 종료