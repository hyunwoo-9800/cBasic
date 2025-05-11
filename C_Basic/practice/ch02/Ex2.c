#include <stdio.h>
#include <conio.h>

// 함수 선언
void print_star(int line)
{

	int i = 0;
	int j = 0;

	for (i = 0; i < line; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	} // for문 종료

} // 함수 종료

int main()
{

	int line = 0;
	int key_value = 0; // 키를 하나 입력받기 위한 변수
	
	printf("삼각형 만들기_함수호출 예제\n");
	printf("몇 줄로 삼각형을 만들꺼니?");
	scanf_s("%d", &line);

	print_star(line);

	printf("종료하려면 아무키나 눌러주세요");
	key_value = _getch();

} // main 끝