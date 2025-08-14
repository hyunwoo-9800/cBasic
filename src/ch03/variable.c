#include <stdio.h>

// 프로그램 설명: 변수 선언 예제
// 작성일: 2025/08/14
// 작성자: Hyunwoo

int value = 0;			// 전역 변수 선언

void func() {

	value = 200;

}

int main(void) {
	// 여기에 코드 작성

	int count = 0;      // 정수형 변수 count 선언
	count = 100;        // count에 100 할당
	count = count - 50; // count 값 계산

	int total = 0;				// 정수형 변수
	double average = 0.0;		// 실수형 변수

	value = 100;

	printf("count의 값: %d\n", count);             // 값 출력
	printf("count의 주소: %p\n", (void*)&count);   // 주소 출력

	printf("total의 값: %d\n", total);             // 값 출력
	printf("total의 주소: %p\n", (void*)&total);   // 주소 출력

	printf("average의 값: %f\n", average);             // 값 출력
	printf("average의 주소: %p\n", (void*)&average);   // 주소 출력

	printf("함수 호출 전 value의 값: %d\n", value);             // 값 출력
	printf("함수 호출 전 value의 주소: %p\n", (void*)&value);   // 주소 출력

	func();

	printf("함수 호출 후 value의 값: %d\n", value);             // 값 출력
	printf("함수 호출 후 value의 주소: %p\n", (void*)&value);   // 주소 출력

	return 0;
}
