#include <stdio.h>

//반복함수를 이용해서 숫자피라미드를 출력한다.
//반복함수 같은 경우는 For문과 WHILE문으로 구성이 된다.

int print(int a)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=a; j>i; j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ",j+1);
		}
		 
		printf("\n");
		
	}
 } 
int main(void)
{
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
	
	
	return 0;
}
