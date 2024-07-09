#include <stdio.h>
int main()
{
    int firstnumber, secondnumber, sum, difference, product, division;
    printf("Enter two input number: ");
    scanf("%d%d",&firstnumber,&secondnumber);
    sum = firstnumber + secondnumber;
    difference = firstnumber - secondnumber;
    product = firstnumber * secondnumber;
    division = firstnumber / secondnumber;
    
    printf("The sum of %d and %d is %d\n", firstnumber,secondnumber,sum);
    printf("The difference of %d and %d is %d\n", firstnumber,secondnumber,difference);
    printf("The product of %d and %d is %d\n", firstnumber,secondnumber,product);
    printf("The division of %d and %d is %d\n", firstnumber,secondnumber,division);
}
