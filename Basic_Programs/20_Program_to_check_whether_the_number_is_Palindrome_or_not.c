#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0, revNum = 0, temp = 0;

    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("\n%d\n",num);
    
    num = temp;
    printf("\n%d\n%d\n",num,temp);

    while(temp > 0)
    {
        revNum = (revNum*10) + (temp%10);
        temp /= 10;
    }    

    if(num == revNum)
    {
        printf("%d is palindrome number", revNum);
    }
    else
    {
        printf("%d is not palindrome number", num);
    }
    getch();
    return 0;
}