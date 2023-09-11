// delete the first node from a linked list

#include<stdio.h>
#include<stdlib.h>
 
 struct node{
    int data;
    struct node * next;
 };
 struct node * head , * newnode ,* temp;
 void creation( int key){
    head =NULL;
    while(key==1){
    newnode = (struct node * )malloc (sizeof(struct node));
    printf("Enter your DATA : ");
    scanf("%d",&newnode -> data);
    if(head == NULL){
        head = temp = newnode;
    }else{
        temp -> next = newnode ;
        temp = temp->next;
    }
    printf("Enter your key : ");
    scanf("%d",&key);
    }
 }

  void display(){
  temp = head ;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
 }

 void delete_at_start(){
    temp = head;
    head = head -> next;
    temp -> next=NULL;
    free(temp);
 }
 

 int main(){
    int key=1;
    creation(key);
    printf("Your Linked List is : \n ");
    display();
    printf("\n");
    delete_at_start();
    printf("After deleteing the first node \n");
    display();
    return 0;
 }

//output 

  // Enter your DATA : 2
  // Enter your key : 1
  // Enter your DATA : 5
  // Enter your key : 1
  // Enter your DATA : 6
  // Enter your key : 1
  // Enter your DATA : 9
  // Enter your key : 5
  // Your Linked List is : 
  // 5 6 9
  // After deleteing the first node 
  // 6 9


//-------------------------------------------------------------------------------------------------------------------------------------------------------------




//delete the last node from the linked list
#include<stdio.h>
#include<stdlib.h>
 
 struct node{
    int data;
    struct node * next;
 };
 struct node * head , * newnode ,* temp;
 void creation( int key){
    head =NULL;
    while(key==1){
    newnode = (struct node * )malloc (sizeof(struct node));
    printf("Enter your DATA : ");
    scanf("%d",&newnode -> data);
    if(head == NULL){
        head = temp = newnode;
    }else{
        temp -> next = newnode ;
        temp = temp->next;
    }
    printf("Enter your key : ");
    scanf("%d",&key);
    }
 }

  void display(){
  temp = head ;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
 }

 void delete_in_end(){
    struct node * prev;
    
    temp = head;
    while(temp -> next != NULL){
        prev=temp;
        temp = temp -> next;
    }
    prev -> next = NULL;
    free(temp);
 }
 

 int main(){
    int key=1;
    creation(key);
    printf("Your Linked list is : \n");
    display();
    printf("\n");
    delete_in_end();
    printf("After deletetation the last node : \n");
    display();
    return 0;
 }

//output 

// Enter your DATA : 9
// Enter your key : 1
// Enter your DATA : 8
// Enter your key : 1
// Enter your DATA : 7
// Enter your key : 1
// Enter your DATA : 2
// Enter your key : 1
// Enter your DATA : 4
// Enter your key : 1
// Enter your DATA : 6
// Enter your key : 4
// Your Linked list is : 
// 9 8 7 2 4 6 
// After deletetation the last node : 
// 9 8 7 2 4 


//-------------------------------------------------------------------------------------------------------------------------------------------------------------



//delete the node at given position of a linked list 
#include<stdio.h>
#include<stdlib.h>
 
 struct node{
    int data;
    struct node * next;
 };
 struct node * head , * newnode ,* temp;
 void creation( int key){
    head =NULL;
    while(key==1){
    newnode = (struct node * )malloc (sizeof(struct node));
    printf("Enter your DATA : ");
    scanf("%d",&newnode -> data);
    if(head == NULL){
        head = temp = newnode;
    }else{
        temp -> next = newnode ;
        temp = temp->next;
    }
    printf("Enter your key : ");
    scanf("%d",&key);
    }
 }

  void display(){
  temp = head ;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
 }

 void delete_at_given_position(int pos){
    struct node * prev;
    int i=1;
    temp = head;
    while(i<pos){
        prev=temp;
        temp = temp -> next;
        i++;
    }
    prev -> next = temp -> next;
    temp -> next = NULL;
    free(temp);
 }
 

 int main(){
    int key=1 , pos;
    creation(key);
    printf("Your Linked list is : \n");
    display();
    printf("\n");
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("\n");
    delete_at_given_position(pos);
    printf("After deletetation the node : \n");
    display();
    return 0;
 }

//output 

// Enter your DATA : 7
// Enter your key : 1
// Enter your DATA : 4
// Enter your key : 1
// Enter your DATA : 8
// Enter your key : 1
// Enter your DATA : 6
// Enter your key : 1
// Enter your DATA : 2
// Enter your key : 1
// Enter your DATA : 9
// Enter your key : 2
// Your Linked list is : 
// 7 4 8 6 2 9 
// Enter the position : 4
// After deletetation the node : 
// 7 4 8 2 9 

