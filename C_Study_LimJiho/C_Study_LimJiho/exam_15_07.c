//예제 15-7_static 변수

#include <stdio.h>

void increaseNumber() {
	static int number = 0; //static 지역 변수 number의 선언
	number++;
	printf("number: %d \n", number);
}

int main(void) {
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}