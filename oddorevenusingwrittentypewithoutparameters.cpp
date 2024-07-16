// wap to determine whether a number is odd or even using written type function without parameters

#include<stdio.h>
int Even();

int main() {
    if (Even())
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}

	int Even(){
	int Num;
	printf("enter any number:");
	scanf("%d",&Num);
	return (Num % 2 == 0);
}

