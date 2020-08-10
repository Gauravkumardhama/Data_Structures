#include <stdio.h>
#include <malloc.h>
void enque();
int deque();
int peek();
void display();

struct Node
{
    int data ;
    struct Node *next ;
}*head = NULL ;


int main() {

    lb :
    printf("****Main Menu****\n");
    printf(" 1.Insert\n");
    printf(" 2.Delete\n");
    printf(" 3.Peek\n");
    printf(" 4.Display\n");
    printf(" 5.Exit\n");
    int input ;
    scanf("%d",&input);

    switch (input)
    {
        case 1 : enque();
            goto lb ;
        case 2 : printf("%d\n",deque());
            goto lb ;
        case 3 : printf("%d\n",peek());
            goto lb ;
        case 4 : display();
            goto lb ;
        case 5 :
            break ;
    }
    return 0;
}

void enque()
{
    int d = 0 ;
    printf("Enter element:");
    scanf("%d",&d);
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = d ;
    node->next = NULL ;
    if (head == NULL)
    {
        head = node ;
    }
    else
    {
        struct Node *ptr = head ;
        while (ptr->next != NULL)
            ptr = ptr->next ;

        ptr->next = node ;
    }
}

int deque()
{
    if (head == NULL)
        printf("UNDERFLOW CONTION");
    else {
        struct Node *ptr = head;
        int d = head->data;
        head = head->next;
        free(ptr);
        printf("Element deleted:");
        return d ;
    }
}

int peek()
{
    if (head == NULL)
        printf("UNDERFLOW CONTION");
    else
        return head->data;
    return -1 ;
}

void display()
{
    if (head == NULL)
        printf("UNDERFLOW CONTION");
    else {
        struct Node *ptr = head;
        while (ptr != NULL)
        {
            printf("%d\t" , ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
