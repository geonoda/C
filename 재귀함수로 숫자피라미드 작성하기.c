#include <stdio.h>

//�ݺ��Լ��� �̿��ؼ� �����Ƕ�̵带 ����Ѵ�.
//�ݺ��Լ� ���� ���� For���� WHILE������ ������ �ȴ�.

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
