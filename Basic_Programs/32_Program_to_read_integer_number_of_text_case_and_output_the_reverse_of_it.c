#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int num[12] = {0}, revNum[12] = {0}, temp[12] = {0}, cnt = 0, i = 0;

    printf("\nEnter the number of test case: ");
    scanf("%d",&cnt);

    printf("\nEnter the numbers : \n");

    for (i = 0; i < cnt; i++)
    {
        printf("\n Number %d : ", i + 1);
        scanf("%d",&num[i]);
        fflush(stdin);

        temp[i] = num[i];


        while (temp[i] > 0)
        {
            revNum[i] = (revNum[i] * 10) + (temp[i] % 10);
            temp[i] /= 10;
        }
    }

    printf("\nReverse of the inputted number is as follows:\n");

    for (i = 0; i < cnt; i++)
    {
        printf("\n Number %d : %d\n", i + 1, revNum[i]);
    }

    printf("\n\nThanks for visiting.");

    getch();
    return 0;
}
