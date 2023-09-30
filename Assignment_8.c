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

//OUTPUT
// Enter your size : 5
// Enter your data : 8
// Enter your data : 6
// Enter your data : 4
// Enter your data : 2
// Enter your data : 3
// Enter your new data : 100
// Your list is : 
// 100 8 6 4 2 3 

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

// Insert a node in the last of a Doubly LINKED LIST

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

void insert_at_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter your new data : ");
    scanf("%d",&newnode -> data);
    newnode -> prev = NULL ; newnode -> next = NULL;
    temp = tail;
    tail = newnode;
    temp -> next = newnode;
    newnode -> prev = temp;
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
    insert_at_end();
    printf("Your List is : \n");
    display();
    return 0;
}

//OUTPUT
// Enter your size : 5
// Enter your data : 7
// Enter your data : 9
// Enter your data : 6
// Enter your data : 4
// Enter your data : 2
// Enter your new data : 100
// Your List is : 
// 7 9 6 4 2 100

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

//Insert a node at a given position in Doubly LINKED LIST 

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

void insert_at_pos(){
    int pos; int i=1;
    struct node * curr;
    printf("Enter your position : ");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter your new data : ");
    scanf("%d",&newnode -> data);
    newnode -> prev = NULL ; newnode -> next = NULL;
    temp = head;
    while(i<pos-1){
        temp = temp -> next;
        i++;
    }
    curr = temp -> next;
    newnode -> next = curr;
    curr -> prev = newnode;
    newnode -> prev = temp;
    temp -> next = newnode;

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
    insert_at_pos();
    printf("Your List is : \n");
    display();
    return 0;
}

//OUTPUT
// Enter your size : 5
// Enter your data : 3
// Enter your data : 4
// Enter your data : 9
// Enter your data : 7
// Enter your data : 1
// Enter your position : 4
// Enter your new data : 100
// Your List is :
// 3 4 9 100 7 1

