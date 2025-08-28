#include <stdio.h>

// 프로그램 설명: 변수의 초기화 예제
// 작성일: 2025/08/28
// 작성자: Hyunwoo

// 매크로 상수 선언
#define X1 5
#define Y1 10
#define CHARACTER1 '@'
#define PI1 3.14
#define NAME1 "조현우"
#define AGE1  27

int main(void) {

	// 선언과 초기화
	int total1 = 0;      // 선언 후 0으로 초기화
	// int total2;       초기화 하지 않으면 쓰레기 값을 가짐

	printf("변수의 선언과 초기화\n");
	printf("초기 total1 = %d\n", total1);
	// printf("total2 = %d\n", total2);

	total1 = total1 + 1000;
	// total2 = total2 + 1000;
	printf("계산된 total1 = %d\n", total1);


	// 여러 개의 변수 선언
	int kor = 100, eng = 99, math = 98;     // 콤마(,)를 구분 기호로 사용
	// int i = 0, j, k;                        // 선언과 동시에 초기화 또는 초기화 하지 않음
	printf("\n여러 개의 변수 선언\n");
	printf("kor = %d\n", kor);
	printf("eng = %d\n", eng);
	printf("math = %d\n", math);


	// 상수
	int value = 2005;
	char ch = 'a';
	float pi_f = 3.14F;
	double pi_d = 0.314e1;
	char* str = "Korea";

	printf("\n상수 선언\n");
	printf("value = %d\n", value);      // int
	printf("ch(문자) = %c\n", ch);      // 문자 출력
	printf("ch(아스키 코드) = %d\n", ch); // 아스키 코드 값 출력
	printf("pi_f = %f\n", pi_f);        // float
	printf("pi_d = %lf\n", pi_d);       // double
	printf("str = %s\n", str);          // 문자열

	printf("\n매크로 상수 출력\n");
	printf("X1 = %d\n", X1);             // 정수
	printf("Y1 = %d\n", Y1);             // 정수
	printf("CHARACTER1 = %c\n", CHARACTER1); // 문자
	printf("PI1 = %.2f\n", PI1);         // 실수 (소수점 2자리)
	printf("NAME1 = %s\n", NAME1);       // 문자열
	printf("AGE1 = %d\n", AGE1);         // 정수

	// const를 이용한 상수 출력 예제
	const int X2 = 999;
	const int Y2 = 123;
	const char CHARACTER2 = '?';
	const float PI2 = 5.66F;
	const char* NAME2 = "고길동";
	const int AGE2  = 150;

	printf("\nconst 상수 출력\n");
	printf("X2 = %d\n", X2);
	printf("Y2 = %d\n", Y2);
	printf("CHARACTER2 = %c\n", CHARACTER2);
	printf("PI2 = %.2f\n", PI2);
	printf("NAME2 = %s\n", NAME2);
	printf("AGE2 = %d\n", AGE2);

	return 0;
}
