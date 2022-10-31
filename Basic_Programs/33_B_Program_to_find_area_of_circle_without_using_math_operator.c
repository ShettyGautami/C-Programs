#include<stdio.h>
#include<conio.h>

int main()
{
    float radius = 0.0, area = 0.0;

    printf("\nEnter the radius : ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    printf("\n%f %f ",radius , 3.14);
    printf("\nArea of circle : %.2f", area);
    printf("\nThanks for visiting");    
    getch();
    return 0;
}