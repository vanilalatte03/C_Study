//예제 15-3_함수의 형태(입력값과 반환값이 모두 있는 경우
/*
#include <stdio.h>

//정수형 데이터 두 개를 전달받아 정수형 데이터를 반환합니다.
int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}

int main(void) {
	int result; //반환값을 저장하는 변수

	result = getBigger(3,5); //3과 5 중 큰 값을 반환
	printf("첫번째 결과: %d\n", result);

	result = getBigger(8,2); 
	printf("두번째 결과: %d\n", result);

	result = getBigger(4,4); 
	printf("세번째 결과: %d\n", result);
	
	return 0;
}*/