#include<stdio.h>
#define MAX 50
int arr[MAX];
int top=-1;
void push()
{
  if(top==MAX-1)
       {printf("Overflow");return;}
    int val;
        top++;
    scanf("%d",&val);
    arr[top]=val;
}
void pop()
{
    if(top==-1)
    {printf("Underflow");return;}
    top--;
}
void display()
{
    if(top==-1)
        printf("Empty.");
    for(int i=top;i>=0;i--)
        printf("%d\n",arr[i]);
}
int main()
{

push();
pop();
pop();
display();
return 0;
}
