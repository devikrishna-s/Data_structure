#include <stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("ente the size of stack\n");
scanf("%d",&n);
printf("\n1.push\n2.pop\n3.display\n4.exit");
do
{
printf("\n enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n exit point");
break;
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n satck is overflow");
}
else
{
printf("\n enter the element to push");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n stack is underflow");
}
else
{
printf("\n the popped element is%d",stack[top]);
top--;
}
}
void display()
{
if (top>=0)
{
printf("the element in stack\n");
for(i=top;i>=0;i--)

printf("\n%d",stack[i]);
printf("press next choice\n");
}
else
{
printf("\n the stack is empty");
}
}
