//예제 16-6_재귀 호출 함수(종료조건)
/*
#include <stdio.h>

//count는 종료 조건을 위한 매개 변수
void sayHello(int count) {
	printf("Hello!\n");

	//count가 3이 되면 더 이상 재귀 호출을 하지 않습니다.
	if (count != 3) {
		sayHello(count + 1);
	}
}

int main(void) {
	//재귀 호출 함수 호출
	sayHello(1);

	return 0;
}*/