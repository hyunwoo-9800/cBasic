#include <stdio.h>
#include <conio.h>

int main()
{

	int i = 0; 
	int sum = 0;	// �հ� ó���� ����
	int key_value = 0;	// Ű�� �Է¹ޱ� ���� ����

	for (i = 0; i <= 100; i++)
	{
		sum += i;
	} // for ����

	printf("1���� 100������ �� = %d \n", sum);
	printf("���Ḧ ���� �ƹ�Ű�� �����ּ���.");

	key_value = _getch();

} // main ����