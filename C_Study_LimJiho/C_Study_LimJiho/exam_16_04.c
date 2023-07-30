//예제 16-4_Call-by-reference
/*
#include <stdio.h>

//매개 변수로 포인터 변수 ptr1과 ptr2 선언
void swapNumber(int* ptr1, int* ptr2) {
	//실제 주소에 저장된 값을 서로 교환합니다.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("함수 안에서 확인한 결과, num1 : %d num2 : %d\n", *ptr1, *ptr2);
}

int main(void) {
	int number1 = 33, number2 = 99;
	swapNumber(&number1, &number2);
	printf("함수 호출 완료 후 확인한 결과, number1 : %d number2 : %d\n", number1, number2);

	return 0;
}*/