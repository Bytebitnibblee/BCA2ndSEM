#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter any two numbers:");
	scanf("%d%d",&num1,&num2);
	printf("original number is num1=%d &num2=%d");
	
	num3=num1;
	num1=num2;
	num2=num3;
	
	printf("the value of num1 and num2 is swapped:");
return 0;
}
