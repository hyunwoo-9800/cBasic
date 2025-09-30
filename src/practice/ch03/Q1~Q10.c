#include <stdio.h>

// 프로그램 설명: 챕터3 연습 문제(1번부터 5번)
// 작성일: YYYY/MM/DD
// 작성자: Hyunwoo

int value_test = 0;

static void func() {

	value_test = value_test + 200;
	printf("   확인) %d \n", value_test);

}

int main(void) {

	puts("────────────────────────────────");
	puts("챕터 3 연습문제 정답/확인");
	puts("────────────────────────────────\n");

	// 1) 변수 선언
	puts("1) a. 점수  b. 임시 변수  c. 이름  d. 총합 — 변수를 선언하시오.");
	puts("   → a: int score = 0;   b: int temp = 0;   c: char name[20] = \"\";   d: double total = 0.0;\n");

	int score = 0;          // 점수
	int temp = 0;           // 임시 변수
	char name[20] = "";     // 이름 (최대 19글자 + null)
	double total = 0.0;     // 총합

	printf("   확인) score=%d, temp=%d, name=\"%s\", total=%.2f\n\n",
		score, temp, name, total);

	// 2) 정수형 변수 value = 100
	puts("2) 정수형 변수 value를 선언하고 100으로 초기화하는 문장을 작성하시오.");
	puts("   → int value = 100;\n");

	int value = 100;
	printf("   확인) value=%d\n\n", value);

	// 3) 123456을 저장할 수 있는 데이터형
	puts("3) 123456을 저장할 수 있는 데이터형은?");
	puts("   → int형, float형, double형 (※ float는 정밀도 주의)\n");

	int   num_int = 123456;
	float num_float = 123456;
	double num_double = 123456;
	printf("   확인) int=%d, float=%.0f, double=%.0lf\n\n",
		num_int, num_float, num_double);

	// 4) 0.001을 저장할 수 있는 데이터형
	puts("4) 0.001을 저장할 수 있는 데이터형은?");
	puts("   → float형, double형\n");

	float  small_float = 0.001f;
	double small_double = 0.001;
	printf("   확인) float=%f, double=%lf\n\n", small_float, small_double);

	// 5) 오버플로우 문제
	puts("5) 다음 코드의 문제점을 설명하시오");
	puts("   int ch = 10000;");
	puts("   ch = ch * ch * ch;");
	puts("   → int의 표현 범위를 넘어 오버플로우 발생\n");

	int ch = 10000;
	long long ch_big = (long long)ch * ch * ch;  // 올바른 큰 타입 계산
	ch = ch * ch * ch;                           // 의도적 오버플로우
	printf("   확인) int 오버플로우 결과=%d, long long 계산값=%lld\n",
		ch, ch_big);

	// 6) 출력 값 확인
	puts("6) 다음 문장이 실행되면 출력 값은 얼마입니까?");
	puts("   #include <stdio.h>");
	puts("   int value;");
	puts("   void func() {");
	puts("   value = value + 200;");
	puts("   printf('%d \ n, value')");
	puts("   }");
	puts("   main() {");
	puts("   int value = 100;");
	puts("   func();");
	puts("   }");
	puts("   → 200\n");

	int value_test = 100;
	func();

	// 7) 변수명으로 사용할 수 없는 것
	puts("7) 다음 중 변수명으로 사용할 수 없는 것을 모두 선택하십시오.");
	puts("   a.count    b. main    c. _hello    d.printf    e.for    f.if    g.@test    h.2006year");
	puts("   b, d, e, f, g, h\n");

	// 사용 가능한 변수명 예시
	int count = 1;
	int _hello = 2;

	printf("   확인) count = %d\n", count);
	printf("   확인) _hello = %d\n\n", _hello);

	// 아래 변수명들은 주석 해제하면 컴파일 에러 발생

	// int main = 3;        // main은 특별한 함수 이름으로 혼동
	// int printf = 4;      // 표준 라이브러리 함수 이름
	// int for = 5;         // 예약어
	// int if = 6;          // 예약어
	// int @test = 7;       // @ 기호 불가
	// int 2006year = 8;    // 숫자로 시작 불가

	// 8) 음수값을 저장할 수 없는 데이터 형
	puts("8) 다음 중 음수값을 저장할 수 없는 데이터 형은 무엇입니까?.");
	puts("   a.short    b. int    c. unsigned char    d.long");
	puts("   c\n");

	short n1 = -1;
	int n2 = -1;
	unsigned char n3 = -1;
	long n4 = -1;

	printf("   확인) n1 = %d\n", n1);
	printf("   확인) n2 = %d\n", n2);
	printf("   확인) n3 = %d\n", n3);
	printf("   확인) n4 = %d\n\n", n4);

	// 9) int형의 크기
	puts("9) int형이 저장할 수 있는 크기는 몇 바이트입니까?");
	puts("   → 4바이트\n");

	printf("   확인) int 크기 = %zu 바이트\n", sizeof(int));

	// 10) 틀린 코드 수정

	puts("10) 틀린 코드 수정");
	puts("    원래 코드: int hap; hap = hap + 500;");
	puts("    → 지역 변수를 초기화하지 않고 사용해서 오류 발생\n");
	puts("    수정 코드: int hap = 0; hap = hap + 500;\n");

	int hap = 0;
		hap = hap + 500;

	printf("    확인) %d \n", hap);

	puts("\n────────────────────────────────");
	return 0;
}
