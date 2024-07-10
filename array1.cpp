// to store first five values in array and displaty it 

#include<stdio.h>
int main()
{
	int age[100], size, i;
	printf("enter array size\n");
	scanf("%d", &size);

  for (i = 0; i<=(size-1); i++)
  {
  	printf("array at %d position",i);
  	scanf("%d", &age[i]);
  }
  
  printf("array elments are \t");
  for(i=0; i<size-1; i++)
  {
  	printf("%d/t",age[i]);
  }
  return 0;
}
  
