# include<stdio.h>
# include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;

void push(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if (ptr==NULL)
    printf("Overflow");
    else{
        printf("Enter item");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("Item pushed to stack");
    }
}

void pop(){
    struct node *ptr;
    int item;
    if (head==NULL)
    printf("Underflow");
    else{
        ptr=head;
        item=ptr->data;
        printf("Item popped is %d",item);
        head=ptr->next;
        free(ptr);
    }
}


void display(){
    struct node * temp;
    if (head==NULL)
    printf("Empty");
    else{
        temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}


void main(){
    int ch=0;
    printf("Stack Operations\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    while (ch!=4){
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            default: printf("Exiting"); break;
        }
    }
}
