#include <stdio.h>
#include <conio.h>

void check_prime(int);

int main()
{
    int inum = 0;
    printf("Enter the number :");
    scanf("%d", &inum);

    check_prime(inum);
    printf("\nThanks for visiting");

    getch();
    return 0;
}
void check_prime(int ino)
{
    int i = 0;
    if ((ino == 0) || (ino == 1) || (ino == 4) || (ino == 6) || (ino == 8)|| (ino == 9)|| (ino == 10))
    {
        printf("\n%d is not Prime Number.", ino);
        return;
    }
    for (i = 0; i < ino / 4; i++)
    {
        if(ino % i == 0)
        {
            break;
        }
    }
    if(i == ino/4)
    {
        printf("\n%d is a Prime Number",ino);
    }
    else
    {
        printf("\n%d is not a Prime Number",ino);
    }
}