//예제 19-4_typedef 선언
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int형 정수, int형 정수 포인터, 부호 없는 int형 정수에 각각 이름 붙이기
typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

int main(void) {

	//지역 내에서 사용할 자료형 이름에 대한 선언
	typedef char CHAR;
	typedef char* STR;

	//typedef 선언 이후 자료형은 기존 자료형과 동일한 역할을 수행합니다.
	INT num = 3;
	PINT ptr = &num;
	UINT unum = 5;

	CHAR ch = 'c';
	STR str = "Hello!";

	printf("%d %d %d\n", num, *ptr, unum);
	printf("%c %s\n", ch, str);

	return 0;
}*/