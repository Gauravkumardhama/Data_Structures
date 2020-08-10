#include <stdio.h>
#include <mm_malloc.h>

void push();
int pop();
int peek();
void display();

struct Node
{
    int data ;
    struct Node *next ;
}*head = NULL;

int main()
{
    int  option;
    lb : printf("\n *****MAIN MENU 2*****");
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. PEEK");
    printf("\n 4. DISPLAY");
    printf("\n 5. EXIT");
    printf("\n Enter your option: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
            push();
            goto lb ;
        case 2:
            printf("%d",pop());
            goto lb ;
        case 3:
            printf("%d",peek());
            goto lb ;
        case 4:
            display();
            goto lb ;
        case 5:
            break ;
    }

    return 0 ;
}

void push()
{
    int d = 0;
    scanf("%d", &d);
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = d;
    if (head == NULL)
    {
        ptr->next=NULL;
        head = ptr ;
    }
    else
    {
        ptr->next=head;
        head=ptr;
    }
}

int pop()
{
    if(head == NULL)
        printf("UNDERFLOW CONDITION");
    else
    {
        struct Node *pointer = head;
        int i=head->data;
        head=head->next;
        free(pointer);
        return(i);
    }
}

int peek()
{
    if(head == NULL)
        printf("UNDERFLOW CONDITION");
    else
    {
        return head->data;
    }
}

void display()
{
    if(head == NULL)
        printf("UNDERFLOW CONDITION");
    else
    {
        struct Node *pointer = head;
        while (pointer != NULL)
        {
            printf("%d\t",pointer->data);
            pointer = pointer->next;
        }
    }
}
