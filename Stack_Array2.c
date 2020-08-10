#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1 ;

void push();
int pop();
int peek();
void display();

int main()
{
    int option;
    lb : printf("\n *****MAIN MENU*****");
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
    if (top == MAX - 1)
        printf("OVERFLOW CONDITION");
    else
    {
        int d = 0;
        scanf("%d", &d);
        top++;
        stack[top] = d ;
    }
}

int pop()
{
    if (top == - 1)
        printf("UNDERFLOW CONDITION");
    else
    {
        top--;
        return stack[top + 1];

    }
    return -1 ;
}

int peek()
{
    if (top == - 1)
        printf("UNDERFLOW CONDITION");
    else
    {
        return stack[top];

    }
    return -1 ;
}

void display()
{
    if (top == - 1)
        printf("UNDERFLOW CONDITION");
    else
    {
        for (int i = 0; i <= top; ++i)
        {
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}
