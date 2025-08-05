#include <stdio.h>
#include <conio.h>

int main() {

	int i;
	int j;
	int line;

	int key_value; // getch함수 저장용

	printf("몇 줄로 삼각형을 만들꺼니?");
	scanf_s("%d", &line);

	for (i = 0; i < line; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	} // for 종료
	
	printf("아무 키나 입력해주세요.");
	key_value = _getch(); // 키를 하나 입력받기 위함

} // mina 종료