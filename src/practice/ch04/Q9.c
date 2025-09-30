#include <stdio.h>

// 프로그램 설명: 챕터4 연습문제(가족의 모든 나이를 입력받아 나이의 합을 출력하는 프로그래)
// 작성일: 2025/09/30
// 작성자: Hyunwoo

int main(void) {
    
    int age = 0;
    int age_sum = 0;

    printf("모든 가족의 나이의 합을 구하는 프로그램입니다.\n");

    for (;;) {

        printf("가족의 나이를 입력해주세요 (그만두려면 0) : ");

        scanf_s("%d", &age);

        if (age == 0)
        {
            break;
        }

        age_sum += age;

    }

    printf("가족의 나이의 합은 %d 입니다.", age_sum);

    return 0;
}
