#include <stdio.h>

void push(int item);
void pop();
void display();
int top=-1, stack[10],item,size;
void main(){
    int ch=0;
    printf("Enter size:");
    scanf("%d",&size);
    printf("Operations:\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    while (ch!=4){
        printf("Enter operation:");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter item:");
            scanf("%d",&item);
            push(item);
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            default:printf("Exiting...");
        }
    }
}

void push(int item){
    if (top==size-1){
        printf("Overflow");
    }
    else{
        top=top+1;
        stack[top]=item;
        printf("Item pushed");
    }
}

void pop(){
    if (top==-1)
    printf("Underflow");
    else{
        printf("Popped item:%d",stack[top]);
        top=top-1;
    }
}

void display(){
    int i;
    if (top==-1)
    printf("Empty stack");
    else{
        printf("Items:\n");
        for (i=0;i<=top;i++)
        printf("%d\t",stack[i]);
    }
}
