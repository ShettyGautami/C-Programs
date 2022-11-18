#include<stdio.h>
#include<conio.h>

int add_digits(int);

void main()
{
    int n, result;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);

    result = add_digits(n);

    printf("Sum : %d", result);
    getch();
}

int add_digits(int n)
{
    static int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    sum = n % 10 + add_digits(n / 10);
    return sum;
}