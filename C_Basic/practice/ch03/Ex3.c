#include <stdio.h>

int value;

// �Լ� ����
static void func()
{
	value = value + 200;
	printf("%d\n", value);

} // �Լ� ����


int main()
{

	int value = 100;
	func(); // �Լ� ȣ��

} // main ����