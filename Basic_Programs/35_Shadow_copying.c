#include<stdio.h>
#include<conio.h>

int main()
{
    int num1[] = {1, 2, 3, 4, 5};
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        printf("num1[%d] = %d\n",i,num1[i]);
    }
    getch();
    return 0;
}