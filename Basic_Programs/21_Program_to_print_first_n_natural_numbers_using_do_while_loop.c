#include <stdio.h>
#include <conio.h>
int main()
{
    int num = 0, i = 1;
    printf("Enter the number: \n");
    scanf("%d", &num);

    do
    {
        printf("%d \n",i);
        i++;
    } while (i <= num);

    printf("\nThanks for visiting");

    getch();
    return 0;
}