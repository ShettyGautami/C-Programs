#include<stdio.h>
#include<conio.h>
int main()
{   
    int ch = 0;

    printf("\nDesired ASCII Table is as below: \n\n");

    for(ch = 1; ch < 129; ch++)
    {
        printf("%d = %c \n",ch,(char)ch);
    }

    printf("\nThanks for visiting");

    getch();
    return 0;
}