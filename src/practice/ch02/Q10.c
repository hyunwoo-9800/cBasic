#include <stdio.h>

// 프로그램 설명: 챕터2 연습문제(주어진 함수로 삼각형이 출력되도록 하시오)
// 작성일:2025/08/12
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
    int line = 0;       // 삼각형 줄 수

    printf("몇 줄로 삼각형을 만들꺼니? ");
    scanf_s("%d", &line);

    print_star(line);

    return 0;
}
