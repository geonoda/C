#include <stdio.h>

int main(void)
{
	int x,i;
	printf("단을 입력하세요:");
	scanf("%d",&x);
	for(i=1; i<10; i++)
	{
		printf("%d*%d=%d\n",x,i,x*i);
	}
}
