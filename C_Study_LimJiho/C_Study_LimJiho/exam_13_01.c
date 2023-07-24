//예제 13-1_문자열과 포인터
/*
#include <stdio.h>

int main(void) {
	char good[] = "Good!";
	char* bad = "Bad!";
	printf("%s %s", good, bad);

	//배열 기반의 문자열 변수
	good[0] = 'H';
	good = "New Good"; //불가능(컴파일 에러)

	//포인터 기반의 문자열 변수
	bad[0] = 'S'; //불가능(실행 결과 값의 변경 없음)
	bad = "New Bad"; //가능

	return 0;
}*/