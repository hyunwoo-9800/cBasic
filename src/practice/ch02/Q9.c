#include <stdio.h>

// 프로그램 설명: 챕터2 연습문제(잘못된 곳 수정하기)
// 작성일: 2025/08/12
// 작성자: Hyunwoo

// int main2 (void) { 메인 함수 이름은 main()이어야 한다.
int main(void) {
	// 여기에 코드 작성

	// int i, sup;		// 불필요한 변수와 오타가 있는 변수명

	int sum = 0;		// 합계 저장 변수

	// for (int i = 2; i <= 100; i++) 1 ~ 100까지의 합을 구하려면 i = 1로 시작할 것
	for (int i = 1; i <= 100; i++)
	{

		sum += i;

	}

	printf("1에서 100까지의 합은: %d\n", sum);

	return 0;
}
