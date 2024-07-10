#include<stdio.h>
int main()
{
	int age[5]={40,20,26,19,33};
	int i, count =0;
	
	printf ("age between 20-30 are/n");
	
	for(i=0; i<5; i++)
	{
		if((age[i]>=20) && (age[i]<=30))
		{
			if((age[i]>=20|&&(age[i]<=30))
			{
				count=count+1; 
				printf("%d",age[i]);
				print("total age=%d",count);
				return 0;
			}
		}
	}
}
