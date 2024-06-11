#include <stdio.h>

int main()
{
	// 개행 출력
	printf("안녕하세요! \n");
	printf("This is a computer \n");
	printf("C언어 길라잡이 - 정보문화사 \n");
	
	printf("\n");

	// 개행 없이 출력
	printf("C언어 길라잡이 - 정보문화사");
	printf("C언어 길라잡이 - 정보문화사");
	printf("C언어 길라잡이 - 정보문화사");
	
	printf("\n");

	// 제어문자 테스트
	printf("Hello World! \n"); // 다음 줄로 개행
	printf("Hello World! \r"); // 현재 줄의 맨 앞으로 이동
	printf("\n");
	printf("Hello World! \a"); // 벨소리 출력
	printf("\n");
	printf("Hello World! \t"); // tab키
	printf("\n");
	printf("Hello World! \\"); // '/'
	printf("\n");
	printf("Hello World! \'"); // 작은 따옴표
	printf("\n");
	printf("Hello World! \""); // 큰 따옴표
	printf("\n");
	
	// 정수형 변수 출력
	int x = 5;
	int y = -100;
	printf("\n");
	printf("%d, %ld \n", x, y);
	printf("\n");

	// 문자형 변수 출력
	char ch = 'A';
	printf("%c \n", ch); // 문자형으로 출력
	printf("%d \n", ch); // 정수형으로 출력
	printf("\n");

	// 실수값 출력
	printf("%f \n", 3.141592);
	printf("%e \n", 55.345); // 부동 소수점
	printf("%E \n", 55.345); // 부동 소수점


} // main 종료