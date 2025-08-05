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
	}
} // print_star 함수 종료

int main()
{

	int line;
	int key_value; // getch함수 저장용
	
	printf("삼각형 만들기 함수호출\n");
	printf("몇 줄로 삼각형을 만들꺼니?");
	scanf_s("%d", &line);

	// 함수 호출
	print_star(line);

	printf("아무 키나 입력해주세요.");
	key_value = _getch();  // 키를 하나 입력받기 위함

} // main 종료