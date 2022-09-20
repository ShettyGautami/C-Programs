#include<stdio.h>
#include<conio.h>

static int a_length;

void create_array_elements(int*);
void insert_array_elements(int*);
void delete_array_elements(int*);
void display_array_elements(int*);

int main()
{
    char check = 0;
    int array[20] = {}, select = 0;

    create_array_elements(array);
    
    for(;;)
    {

        printf("\nWhat do you want to do (Select any on)?");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n4. Display");
        printf("\n3. Exit\n");
        printf("\nYour answer : ");
        scanf("%d",&select);
        if(select == 1)
        {
            insert_array_elements(array);
            getch();
        }
        else if(select == 2)
        {
            delete_array_elements(array);
            getch();
        }
        else if(select == 3)
        {
            printf("\nAre you sure you want to exit ?(Y/N) ");
            check = getchar();
            if(check == 'Y')
            {
                break;
            }
        }
        else{
            printf("\nIncorrect selection");
        }

    }    
    printf("\nThanks for visiting.");
    getch();
    return 0;
}

void create_array_elements(int *array)
{
    printf("\nEnter the number of array elements : ");
    scanf("%d",&a_length);

    printf("\nEnter the array elements : ");

    for(int i = 0; i < a_length; i++)
    {
        printf("\nElement No %d : ",i + 1);
        scanf("%d",&array[i]);
    }
}
void insert_array_elements(int *array)
{
    int position = 0, new_element = 0;
    printf("\nEnter the position of new array elements : ");
    scanf("%d",&position);
    
    printf("\nEnter the new element : ");
    scanf("%d",&new_element);
    
    if(position < a_length)
    {
        for(int i = a_length; i <= position; i--)
        {
            array[i] = array[i-1];
        }
    }
    if(position > 20)
    {
        printf("\nThe insertion is unfortunately not possible due to lack of space");
        return;
    }
    
    array[position] = new_element;
    printf("\nNew element has been succesfully added!");

}

void delete_array_elements(int*array)
{
    int position, i;
    printf("\nEnter the position of the element you want to delete : ");
    scanf("%d",&position);

    if(position > a_length)
    {
        printf("\nDeletion of %d is not possible",position);
        return;
    }
    i = position;
    while(i < a_length)
    {
        array[i - 1] = array[i];
    }
    array[a_length] = 0;
    return;
}
void display_array_element(int *array)
{
    printf("\nElements in the array : ");
}