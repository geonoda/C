#include <stdio.h>

int main(void)
{

int num1, num2, num3;
	printf("3개의 정수 입력:");
	scanf_s(" % d % o % x", &num1, &num2, &num3);
	printf("입력된 정수 10진수 출력");
	printf(" % d % d % d", num1, num2, num3);
	return 0;
}
