#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float radius = 0.0, area = 0.0;

    printf("\nEnter the radius : ");
    scanf("%f",&radius);

    area = M_PI * pow(radius, 2);

    printf("\nArea of circle : %.2f", area);
    printf("\nThanks for visiting");    
    getch();
    return 0;
}