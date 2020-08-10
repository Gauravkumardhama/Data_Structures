#include <stdio.h>
#include <malloc.h>
void displayLL();
void addStart();
void addEnd();
void addAfter();
void deleteStart();
void deleteEnd();
void Delete();
void deleteLL();
void sortLL();

struct Node
{
    int data ;
    struct Node *next ;
}*head = NULL,*ptr ;

int main()
{
    printf("Enter -1 to end. \n");
    int d = 0 ;
    scanf("%d",&d);
    while (d != -1)
    {
        ptr = (struct Node *) malloc(sizeof(struct Node));
        ptr -> data = d ;
        ptr->next=NULL;
        if (head == NULL ) {
            head = ptr ;
        }
        else
        {
            struct Node *pointer = head;
            while (pointer->next != NULL)
            {
                pointer = pointer->next;
            }
            pointer->next = ptr ;
            ptr->next = NULL;
        }
        scanf("%d",&d);

    }
    lb :
    printf("\n\n *****MAIN MENU *****");
    printf("\n 2 :  Display the list");
    printf("\n 3 :  Add a node at the beginning");
    printf("\n 4 :  Add a node at the end");
    printf("\n 5 :  Add a node after a given node");
    printf("\n 6 :  Delete a node from the beginning");
    printf("\n 7 :  Delete a node from the end");
    printf("\n 8 :  Delete a given node");
    printf("\n 9 : Delete the entire list");
    printf("\n 10: Sort the list");
    printf("\n 11: EXIT");
    printf("\nEnter your option : ");
    int option ;
    scanf("%d", &option);
    switch(option) {
        case 2:
            displayLL();
            goto lb ;
            break;
        case 3:
            addStart();
            goto lb ;
            break;
        case 4:
            addEnd();
            goto lb ;
        case 5:
            addAfter();
            goto lb ;
            break;
        case 6:
            deleteStart();
            goto lb ;
            break;
        case 7:
            deleteEnd();
            goto lb ;
            break;
        case 8:
            Delete();
            goto lb ;
            break;
        case 9:
            deleteLL();
            goto lb ;
            break;
        case 10:
            sortLL();
            goto lb ;
            break;
        case 11 :
            break;
    }


    return 0 ;
}

void displayLL()
{
    struct Node *ptr  = head ;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void addStart()
{
    int d = 0 ;
    scanf("%d",&d);
    struct Node *ptr = (struct node *)malloc(sizeof(struct Node));;
    ptr->next = head ;
    ptr->data = d ;
    head = ptr;

}

void addEnd()
{
    int d = 0 ;
    scanf("%d",&d);
    struct Node *ptr = head ;
    while (ptr->next != NULL)
        ptr = ptr->next;

    struct Node *node = (struct Node *)malloc(sizeof(struct Node));;
    node->data =  d;
    ptr->next = node ;
    node->next = NULL;
}

void addAfter()
{
    int d = 0 ;
    scanf("%d",&d);
    int ele = 0 ;
    scanf("%d",&ele);
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head ;
    while (ptr->data != ele )
        ptr = ptr->next ;
    node->next = ptr->next ;
    ptr->next = node ;
    node->data = d ;
}

void deleteStart()
{
    struct Node *ptr = head ;
    head = head->next;
    free(ptr);
}


void deleteEnd()
{
    struct Node *ptr = head ;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *pointer = ptr->next ;
    ptr->next = NULL;
    free(pointer);
}


void Delete()
{
    int d = 0 ;
    scanf("%d",&d);
    struct Node *ptr = head ;
    struct Node *prevPTR = ptr ;
    while (ptr->data != d)
    {
        prevPTR = ptr ;
        ptr = ptr->next ;
    }
    prevPTR->next = ptr->next;
    free(ptr);
}


void deleteLL()
{
    struct Node *ptr = head ;
    struct Node *prev = ptr ;

    while (ptr != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
        free(prev);
    }
    head = NULL;
}


void sortLL()
{

}
