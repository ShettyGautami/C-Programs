#include<stdio.h>
#include<conio.h>

int main()
{
    int num_of_elements = 0, array[20] = {}, i = 0, sum = 0;
    printf("\nEnter the number of array elements :");
    scanf("%d",&num_of_elements);
    for(i = 0; i < num_of_elements; i++)
    {
        printf("\nElement no %d : ", i+1);
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("\nThe sum of all array elements is %d", sum);
    printf("\nThanks for visiting.");
    getch();
    return 0;
}