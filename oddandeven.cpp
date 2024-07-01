#include <stdio.h>
int main()
{
	char option;
	int input;
	do{
		
	printf("enter any integer:");
	scanf("%d",&input);
	if(input%2==0)
	
	{
		printf("the number %d is even",input);
	}
	else
	{
		printf("the number %d is odd",input);
	}
	
	printf("do you want to continue: \n");
	printf("press Y for continue and any other key for exit: \n");
	scanf("%c",&option);
}while(option =='Y'||option =='y');

return 0;
}
