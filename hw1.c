#include<stdio.h>

int main(void)
{
	int num1, num2;
	printf("두 정수를 입력하세요");
	scanf("%d %d", &num1, &num2);

	printf("AND 연산의 결과: %d %d %d \n", num1, num2, num1&num2);
	printf("OR 연산의 결과: %d %d %d \n", num1, num2, num1|num2);
	printf("XOR 연산의 결과: %d %d %d \n", num1, num2, num1^num2);

	return 0;
}