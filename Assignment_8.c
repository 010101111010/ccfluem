// Insert a node at the Begnning in a Doubly LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;

};

struct node * head = NULL , * newnode , * temp , * tail;

void creation(int n){
    for(int i=1; i<=n; i++){
        newnode = (struct node * )malloc(sizeof(struct node));
        printf("Enter your data : ");
        scanf("%d",&newnode->data);
        newnode -> prev = NULL ; newnode -> next = NULL;
        if(head == NULL){ 

            head = temp =tail =newnode;

        }
        else{
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
            tail=newnode;
        }
    }
}

void insert_at_beg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter your new data : ");
    scanf("%d",&newnode -> data);
    newnode -> prev = NULL ; newnode -> next = NULL;
    temp = head;
    head = newnode;
    newnode -> next = temp ;
    temp -> prev = newnode;
}

void display(){
    temp = head;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp->next;
    }
}

int main(){
    int size;
    printf("Enter your size : ");
    scanf("%d",&size);
    creation(size);
    insert_at_beg();
    display();
    return 0;
}
