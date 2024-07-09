#include<stdio.h>
int main()
{
	int num1;
	int option;
	char count;
	
	printf("******************************");
	printf("\n");
	
	printf("Determing odd even and positive negative numbers");
	printf("options:");
	printf("\n");
	
	 do{
	
	printf("1. Odd Even");
	printf("\n");
	
	printf("2. Positive Negative");
	printf("\n");
	
	printf("Enter your choice:");
	printf("\n");
	
	scanf("%d",&option);
		printf("enter any number:");
	scanf("%d",&num1);
	
	switch(option)
	{
		case 1:
			if(num1%2==0)
			{
				printf("%d is even",num1);
			}
			else
			{
				printf("%d id odd",num1);
			}
			break;
			
			case 2:
				if(num1>0)
				{
					printf("%d is positive",num1);
				}
				else if(num1==0)
				{
					printf("%d is negative",num1);
				}
				break;
				
				default:
				printf("option not available");
							
	}
	printf("do you want to continue [Y/N]:");
	scanf(" %c",&count);
}while(count == 'Y'|| count =='y');
printf("\n    Thank You");
	return 0;
	
}
