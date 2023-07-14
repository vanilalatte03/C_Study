//예제 11-2_포인터를 이용한 배열의 연산

#include <stdio.h>

int main(void) {
	short sarr[3] = { 1,2,3 };
	int iarr[3] = { 10,20,30 };

	//인덱스 번호를 통한 접근
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	//포인터 연산을 통한 접근
	printf("%d %d %d\n", *sarr, *(sarr+1), *(sarr+2));
	printf("%d %d %d\n", *iarr, *(sarr + 1), *(sarr + 2));

	return 0;
}