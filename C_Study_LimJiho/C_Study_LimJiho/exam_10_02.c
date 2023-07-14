//예제 10-2_포인터 연산자
/*
#include <stdio.h>

int main(void) {
	int num = 10;
	int* pnum;
	pnum = &num; //포인터 변수 pnum은 num의 주소를 저장합니다.

	*pnum = 20;
	printf("num: %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num: %d\n", num);
	printf("*pnum: %d\n", *pnum);
	return 0;
}*/