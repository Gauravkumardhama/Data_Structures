#include <stdio.h>
#define MAX 10
void enque();
int deque();
int peek();
void display();

int queue[MAX];
int front = 0 ;
int rear = -1 ;

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

    if(rear == MAX - 1)
    {
        printf("OVERFLOW CONDITION");
    }
    else
    {

        rear++;
        queue[rear] = d ;
    }
}

int deque()
{
    if (rear == -1 && front == -1 )
    {
        printf("UNDERFLOW CONDITION");
        return -1 ;
    }
    else
    {
        front ++ ;
        int d = queue[front - 1];
        if(front > rear)
        {
            front = rear = -1 ;
        }
        printf("Element deleted:");
        return d ;
    }
}

int peek()
{
    if (rear == -1 && front == -1 )
    {
        printf("UNDERFLOW CONDITION");
        return -1 ;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    if (rear == -1 && front == -1 )
    {
        printf("UNDERFLOW CONDITION");
    }
    else
    {
        int i;
        for (i = front; i <= rear ; ++i)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
