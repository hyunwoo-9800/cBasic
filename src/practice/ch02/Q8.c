#include <stdio.h>

// 프로그램 설명: 챕터2 연습문제(1 ~ 100까지의 합)
// 프로그램을 입력하고 컴파일하여 실행하여 보자
// 작성일: 2025/08/12
// 작성자: Hyunwoo

int main(void) {

	// 여기에 코드 작성
	int sum = 0;		// 합계 저장 변수

	for (int i = 1; i <= 100; i++)
	{

		sum += i;

	}

	printf("1에서 100까지의 합은: %d\n", sum);

	return 0;

}
