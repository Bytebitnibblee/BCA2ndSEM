//wap to calculate area of cirlce using written type function with parameters

#include <stdio.h>

#define PI 3.14  

float area(float r);  

int main()
{
    float r;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);  
    printf("The area of the circle is: %.2f\n", area(r));  
    return 0;
}

float area(float r)
{
    return PI * r * r;  
}

