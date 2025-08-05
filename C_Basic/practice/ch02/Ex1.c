#include <stdio.h>
#include <conio.h>

int main()
{

	int i = 0; 
	int sum = 0;	// 합계 처리용 변수
	int key_value = 0;	// 키를 입력받기 위한 변수

	for (i = 0; i <= 100; i++)
	{
		sum += i;
	} // for 종료

	printf("1에서 100까지의 합 = %d \n", sum);
	printf("종료를 위해 아무키나 눌러주세요.");

	key_value = _getch();

} // main 종료