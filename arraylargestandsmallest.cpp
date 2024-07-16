#include<stdio.h>

int main()
{
    int age[5] = {3, 63, 4, 8, 31};
    int i, largest, smallest;

    largest = age[0]; 
    smallest = age[0];

    for (i = 1; i < 5; i++)
    {
        if (age[i] > largest)
        {
            largest = age[i];
        }
    }
    
    for (i = 1; i < 5; i++)
    {
        if (age[i] < smallest)
        {
            smallest = age[i];
        }
    }
    
    printf(" The largest element is %d\n", largest);
    printf("the Smallest element is %d\n", smallest);

    return 0;
}

