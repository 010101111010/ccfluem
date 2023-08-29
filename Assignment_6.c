#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};

struct node * head = NULL , * newnode ,* temp;

//To add a new node 
void insert_at_end(){
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter your new data : ");
scanf("%d",&newnode ->data);
newnode -> next = NULL;
temp = head;
while(temp -> next != NULL){
    temp = temp->next;
}
temp -> next = newnode;
}

//To create a linkedlist
void createNew(int n){
    for(int i = 1 ; i <= n ; i++){
        newnode = (struct node * )malloc(sizeof(struct node));
        printf("Enter your data : ");
        scanf("%d",&newnode -> data);
        newnode -> next = NULL;
        if(head == NULL){
            head = temp = newnode;
        }
        else {
            temp -> next = newnode ;
            temp = newnode;
        }
    }
}

//To print the linkedlist
void display(){
    temp = head;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}

//Main program 
int main(){
    int n;
    printf("Enter the size of the Linked List : ");
    scanf("%d",&n);
    createNew(n);
    printf("your linked list is :\n");
    display();
    printf("\n");
    insert_at_end();
    printf("Your final linked list is :\n");
    display();

    return 0;
}




//second question------------------------------------------------------------------------------------------------------------------------------------------------


#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
struct node * head = NULL,* newnode ,* temp;


//To enter a data given location
void insert_given_position(){
    int pos; int i=1;
    printf("Enter your position : ");
    scanf("%d",&pos);
    int count;
    temp = head;
    while(temp != 0){
        count++;
        temp=temp->next;
    }
    if(pos>count){
        printf("Invalid Input \n");
    }
    else{
        newnode=(struct node *)malloc(sizeof(struct node));
        temp = head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        printf("Enter your New data : ");
        scanf("%d",&newnode->data);
        newnode -> next =NULL;
        newnode ->next = temp ->next;
        temp ->next = newnode;
    }
}

//To crate linked list
void createNew(int n){
    for(int i = 1 ; i <= n ; i++){
        newnode = (struct node * )malloc(sizeof(struct node));
        printf("Enter your data : ");
        scanf("%d",&newnode -> data);
        newnode -> next = NULL;
        if(head == NULL){
            head = temp = newnode;
        }
        else {
            temp -> next = newnode ;
            temp = newnode;
        }
    }
}

//To print the linkedlist
void display(){
    temp = head;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}

//Main program 
int main(){
    int n;
    printf("Enter your Linked List size : ");
    scanf("%d",&n);
    createNew(n);
    printf("Your linked list is : \n");
    display();
    printf("\n");
    insert_given_position();
    printf("Your final Linked List is : \n");
    display();

    return 0;
}
