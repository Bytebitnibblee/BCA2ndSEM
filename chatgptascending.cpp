#include <stdio.h>

int main()
{
    int age[5] = {33, 69, 44, 3, 91};
    int i, j, temp; 

    printf("Arranging in ascending order\n");
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (age[i] > age[j])
            {
                temp = age[i];
                age[i] = age[j];
                age[j] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", age[i]);
    }
    printf("\n");

    return 0;
}

