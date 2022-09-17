#include<stdio.h>
#include<conio.h>

static int a_length;

void create_array(int**);
void accept_elements(int*);
void delete_elements(int*);
void display_elements(int*);

int main()
{
    int *array_elements = NULL;
    create_array(&array_elements);
    accept_elements(array_elements);
    delete_elements(array_elements);
    display_elements(array_elements);

    printf("\nThanks for visiting.");
}

void create_array(int **array_elements)
{
    printf("\nEnter your array elements : ");
    scanf("%d",&a_length);
}
