#include <stdio.h>

int value;

// 함수 선언
void func()
{
	value = value + 200;
	printf("%d\n", value);

} // 함수 종료


int main()
{

	int value = 100;
	func(); // 함수 호출

} // main 종료