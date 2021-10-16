#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int toBin (int num); //2진수만들기

int main(void)
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	toBin(n);
	printf("\n");
	return 0;
}

int toBin(int num)
{
	if (num == 1 || num == 0)
		printf("%d", num);
	else
	{
		toBin(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}