#include <stdio.h>
int main(void)
{
	int a=0;
	int b=0;
	scanf("%d%d",&a,&b);
	
	if(b>=a)
	{
		
		for(int i=1; i<10; i++)
		{
			printf("%d*%d=%d\n",a,i,a*i);
		}
		a++;
	}
	return 0;
}
