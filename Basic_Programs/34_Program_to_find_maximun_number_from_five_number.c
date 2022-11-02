#include<stdio.h>
#include<conio.h>

int main()
{
    int inum[5], max = 0, i  = 0;
    for(i = 0; i < 5; i++)
    {
        printf("\nNumber %d : ", i + 1);
        scanf("%d",&inum[i]);
    }
    
    max = inum[0];

    for(i = 0; i < 6; i++)
    {
        if(inum[i] > max)
        {
            max = inum[i];
        }
    }

    printf("\nMaximum : %d", max);

    getch();
    return 0;
}