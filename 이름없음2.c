#include <stdio.h>
int main(void)
{
	int opt=0;
	double num1,num2=0;
	double result;
	
	printf("1.���� 2.���� 3.���� 4.������\n");
	printf("����?");
	scanf("%d",&opt);
	printf("�� ���� �Ǽ� �Է�:");
	scanf("%lf %lf",&num1,&num2);
	
	if(opt==1)
		result=num1+num2;
	if(opt==2)
		result=num1-num2;
	if(opt==3)
		result=num1*num2;
	if(opt==4)
		result=num1/num2;
	printf("���:%f\n",result); 
	return 0;
 } 
