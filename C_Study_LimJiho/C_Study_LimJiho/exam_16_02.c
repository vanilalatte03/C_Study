//예제 16-2_배열을 전달받는 함수 2
/*
#include <stdio.h>

//<기본 예제 exam_16_01.c>의 사용자 정의 함수 readArray를 소폭 수정
int readArray(int arr[], int length) {
	int i;
	printf("배열의 요소 읽어보기: [ ");
	for (i = 0; i < length; i++) {
		//arr[i] == (*arr+i)
		printf("%d", arr[i]);
		if (i + 1 < length) {
			printf(", ");
		}
		else {
			printf(" ");
		}
	}
	printf("]\n");
}

int main(void) {
	int arr[3] = { 3, 6, 9 };
	readArray(arr, 3); //배열의 이름 arr를 포인터 변수에 대입

	return 0;
}*/