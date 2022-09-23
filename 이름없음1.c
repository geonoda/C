#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	if(T>=90)
	{
		printf("A");
	}
	else if(T>=80)
	{
		printf("B");
	}
	else if(T>=70)
	{
		printf("C");
	}
	else if(T>=60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;	 
}

