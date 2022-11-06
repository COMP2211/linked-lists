#include <stdlib.h>
#include <stdio.h>

void create();
void display();
void insert_begin();
void insert_end();
void delete_pos();

struct node
{
        // Your struct here
};
// Remainder of struct definition

int main()
{
        int choice;
        while (1)
        {

                printf("\n               MENU                            \n");
                printf("1.Create     \n");
                printf("2.Display    \n");
                printf("3.Insert at the beginning    \n");
                printf("4.Insert at the end  \n");
                printf("5.Delete from specified position     \n");
                printf("9.Exit       \n");
                printf("--------------------------------------\n");
                printf("Enter your choice:\t");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                        create();
                        break;
                case 2:
                        display();
                        break;
                case 3:
                        insert_begin();
                        break;
                case 4:
                        insert_end();
                        break;
                case 5:
                        delete_pos();
                        break;

                case 9:
                        exit(0);
                        break;

                default:
                        printf("\n Wrong Choice:\n");
                        break;
                }
        }
        return 0;
}
void create()
{
        // your code here
}
void display()
{
        // your code here
}
void insert_begin()
{
        // your code here
}
void insert_end()
{
        // your code here
}
void delete_pos()
{
        // your code here
}
