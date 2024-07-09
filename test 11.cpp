#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter any two numbers:");
	scanf("%d%d",&num1,&num2);
	printf("original number is num1=%d &num2=%d\n", num1, num2);
	
	num3=num1;
	num1=num2;
	num2=num3;
	
	printf("\nthe value of num1=%d and num2=%d is swapped",num1,num2);
return 0;
}
