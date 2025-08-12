#include <stdio.h>

// 프로그램 설명: 함수를 사용한 삼각형 출력하기
// 작성일: YYYY/MM/DD
// 작성자: Hyunwoo

static void print_star(int line) {

    for (int i = 0; i < line; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            printf("*");

        }

        printf("\n");

    }

}

int main(void) {

    // 여기에 코드 작성
    int line = 0;

    printf("몇 줄로 삼각형을 만들꺼니? ");
    scanf_s("%d", &line);

    print_star(line);

    return 0;
}
