#include<stdio.h>
#include<conio.h>

void get_array_elements(int inum[], int icount)
{
    int i = 0;
    for(i = 0; i < icount; i++)
    {
        printf("\nEnter element %d : ",i + 1);
        scanf("%d",&inum[i]);
    }
}

void square_each_elements(int inum[], int icount)
{
    for(int i = 0; i < icount; i++)
    {
        inum[i] *= inum[i];
    }
}

int sum_elements(int inum[], int icount)
{
    int isum = 0;
    for(int i = 0; i < icount; i++)
    {
        isum += inum[i];
    }
    return isum;
}

int main()
{
    int inum[20] = {}, isum = 0, icount = 0;

    printf("\nEnter the number of element : ");
    scanf("%d",&icount);

    get_array_elements(inum, icount);
    square_each_elements(inum, icount);
    isum = sum_elements(inum, icount);

    printf("\n Sum : %d",isum);
    getch();
    return 0;
}
