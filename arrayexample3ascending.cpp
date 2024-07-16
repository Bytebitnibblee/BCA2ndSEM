#include<stdio.h>
int main()
{
	int age[5]={33,69,44,3,91};
	int i, j, temp;
	 
	printf("arranging in ascending order \n");

	for (i=0; i<5; i++)
    	{
    		for(j=i+1; i<5;j++)
    		{
    			if (age[i]>age[i])
    			{
    				temp=age[i];
    				age[i]=age[j];
    				age[j]=temp;
				}
			}
		{
			printf("sorted array in %d\n",i);
		}

	
			printf("\n",i);
	}
}
