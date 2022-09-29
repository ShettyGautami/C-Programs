#include<stdio.h>
#include<conio.h>

static int alength;
void accept_array(int[]);
void reverse_array(int [], int);

int main()
{
    int array[20],r_turns = 0; 
    accept_array(array);

    printf("\nEnter the number of turns : ");
    scanf("%d",&r_turns);

    reverse_array(array,r_turns);

    printf("\nThanks for visiting");    
    getch();
    return 0;
}
void accept_array(int array[])
{
    printf("\nEnter the array element : ");
    scanf("%d",&alength);

    for(int i = 0; i < alength; i++)
    {
        printf("\nElement no %d : ", i);
        scanf("%d",&array[i]);
    }
}

void reverse_array(int array[], int r_turns)
{
    for(int i = 0)
}