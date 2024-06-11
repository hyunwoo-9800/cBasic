#include <stdio.h>

void main(void)
{

	// printf -> puts 사용
	printf("반갑습니다. \n");

	printf("\n");

	puts("반갑습니다. \n");

	printf("\n");

	printf("%d \n", 3.14); // 실수형이 아니기에 쓰레기값 출력
	printf("%f \n", 3.14);

	printf("\n");

	printf("%3.3s \n", "abcde"); // 3글자만 출력

	printf("\n");

} // main 종료