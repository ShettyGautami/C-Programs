#include<stdio.h>
#include<conio.h>
int main()
{
    int ch, i = 0;

    printf("\nEnter the character to get its ASKII value : ");
    scanf("%c",&ch);
    
    printf("%c = %d",ch, ch);

    getch();
    return 0;
}
