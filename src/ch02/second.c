#include <stdio.h>

// 프로그램 설명: 삼각형 출력하기
// 작성일: 2025/08/12
// 작성자: Hyunwoo

int main(void) {

	// 여기에 코드 작성
	int line = 0;

	// 값 입력
	printf("몇 줄로 삼각형을 만들꺼니? ");
	scanf_s("%d", &line);

	for (int i = 0; i < line; i++) {

		for (int j = 0; j <= i; j++) {

			printf("*");

		}

		printf("\n");

	}

	return 0;

}
