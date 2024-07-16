#include<stdio.h>
int main()
{
	int age[5]={33,69,44,3,91};
	int i;
	printf("check whether the number 3 is in array \n");
	scanf("%d",&i);
	
	for (i=0; i<5; i++){
		if(age[i]==3)
		{
			printf("number found at %d position",i);
		}
		else
		{
			printf("number not found at %d position",i);
		}
	}
}
