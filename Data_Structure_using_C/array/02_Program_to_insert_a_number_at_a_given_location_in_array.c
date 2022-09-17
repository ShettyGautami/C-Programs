#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Number of element will be asked and and that number of elements will be dynamically allocted in memory
static int a_len = 0;
void create_array_element(int**);
void accept_array_elements(int*);
void insert_array_elements(int*);
void display_array_elements(int*);

int main()
{
    int *array_elements = NULL;
    
    create_array_element(&array_elements);

    accept_array_elements(array_elements);

    insert_array_elements(array_elements);
    
    display_array_elements(array_elements);

    printf("\nThanks for visiting");

    getch();
    return 0;
}

void create_array_element(int **num)
{
    printf("Enter the number of array elements : ");
    scanf("%d",&a_len);

    a_len++;

    *num = (int*)calloc(a_len,sizeof(a_len));
    getch;
}
void accept_array_elements(int *array_element)
{
    //int i = 0;
    printf("\nEnter tha values of array elements : ");
    for(int i = 0; i < a_len - 1; i++)
    {
        printf("\nArray Element in position %d : ", i + 1);
        scanf("%d",&array_element[i]);
    }
    getch;
}
void insert_array_elements(int* array_element)
{
    int pos = 0, new_num = 0, i = 0;
    printf("\nAt which position do you want to insert an array element ?");
    scanf("%d",&pos);
    if(pos > a_len)
    {
        printf("\nNumber of position is greater than array length!!!");
    }

    printf("\nEnter the number to be inserted : ");
    scanf("%d",&new_num);
    getch();
    // i = 5, 5 < 1, 5432
    for(i = a_len - 1; i > pos - 1; i--)
    {
        array_element[i] = array_element[i - 1];
    }
    array_element[pos - 1] = new_num;
    getch();

}
void display_array_elements(int *array_element)
{
    printf("\n\nArray elements after insertion :");
    for(int i = 0; i < a_len  ; i++)
    {
        printf("\nArray element %d : %d", i + 1, array_element[i]);
    }
    getch;
}
