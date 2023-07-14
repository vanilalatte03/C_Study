//예제 9-5_scanf 함수를 통한 문자열의 입력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50];

	printf("문자열을 입력하세요: ");
	scanf("%s", str); // & 연산자를 사용하지 않습니다.
	
	printf("입력된 문자열: %s\n", str);

	return 0;
}