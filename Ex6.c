#include <stdio.h>

int main()
{

	int grandFatherAge = 0;
	int grandMotherAge = 0;
	int fatherAge = 0;
	int motherAge = 0;
	int sisterAge = 0;
	int brotherAge = 0;
	int myAge = 0;

	int ageTotal = 0;

	printf("가족의 나이 합 구하기 입니다. \n");
	printf("할아버지 나이를 입력해주세요. \n");
	scanf_s("%d", &grandFatherAge);

	printf("할머니 나이를 입력해주세요. \n");
	scanf_s("%d", &grandMotherAge);

	printf("아버지 나이를 입력해주세요. \n");
	scanf_s("%d", &fatherAge);

	printf("어머니 나이를 입력해주세요. \n");
	scanf_s("%d", &motherAge);

	printf("누나/여동생 나이를 입력해주세요. \n");
	scanf_s("%d", &sisterAge);

	printf("형/남동생 나이를 입력해주세요. \n");
	scanf_s("%d", &brotherAge);

	printf("자신의 나이를 입력해주세요. \n");
	scanf_s("%d", &myAge);

	ageTotal = grandFatherAge + grandMotherAge + fatherAge + motherAge + sisterAge + brotherAge + myAge;

	printf("합은 : %d 입니다.\n", ageTotal);

} // main 종료