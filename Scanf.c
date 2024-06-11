#include <stdio.h>

int main()
{

	int value;
	float value2;

	printf("정수형 숫자를 입력해주세요 \n");
	scanf_s("%d", &value);
	printf("%d \n", value);

	printf("\n");

	printf("실수형 숫자를 입력해주세요 \n");
	scanf_s("%f", &value2);
	printf("%f \n", value2);

	printf("\n");

	printf("정수형, 실수형 숫자를 입력해주세요 \n");
	scanf_s("%d %f", &value, &value2);
	printf("\n");
	printf("%d \n%f \n", value, value2);

} // main 종료