#include <stdio.h>

int main(void)
{
	char a;
	int A,B;
	
	scanf("%d%s%d",&A,&a,&B);
	if(a=='+')
	{
		printf("%d%s%d=%d",A,a,B,A+B);
	}
	else
	{
		printf("입력실패");
	}
	
	return 0; 
}
