//예제 18-1_힙 영역의 필요성
/*
#include <stdio.h>

char* getString(void) {
	char str[100];
	printf("좋아하는 단어는?");
	gets(str);

	return str;
}

int main(void) {
	char* result = getString();
	printf("당신이 좋아하는 단어는: %s\n", result);

	return 0;
}*/