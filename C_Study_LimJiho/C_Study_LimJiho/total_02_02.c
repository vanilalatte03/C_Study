//Chapter2_종합문제 2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num1, num2, i, j, temp;

    printf("2부터 9까지의 정수 두 개를 입력하세요.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    //사용자가 큰 수를 먼저 입력할 경우 num1이 작은 수가 되도록 바꾸기
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++) {
        printf("%d단:\n", i);
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}*/