//Chapter2_���չ��� 2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num1, num2, i, j, temp;

    printf("2���� 9������ ���� �� ���� �Է��ϼ���.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    //����ڰ� ū ���� ���� �Է��� ��� num1�� ���� ���� �ǵ��� �ٲٱ�
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++) {
        printf("%d��:\n", i);
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}*/