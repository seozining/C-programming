#include<stdio.h>

int main(void)
{
	int num1, num2;
	printf("�� ������ �Է��ϼ���");
	scanf("%d %d", &num1, &num2);

	printf("AND ������ ���: %d %d %d \n", num1, num2, num1&num2);
	printf("OR ������ ���: %d %d %d \n", num1, num2, num1|num2);
	printf("XOR ������ ���: %d %d %d \n", num1, num2, num1^num2);

	return 0;
}