//ass 5 q1


#include<stdio.h>
#include<stdlib.h>
void main(){
	struct node {
		int data ;
		struct node * next ;
	};
	
	struct node * head = NULL , * newnode , * temp;
	int i = 0 ,size;
	printf("Enter the size of the LINKED LIST : ");
	scanf("%d",&size);
	while ( i<size ){
		newnode = (struct node * )malloc(sizeof(struct node));
		printf("Enter your data : ");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		if ( head == NULL ){
			head = newnode;
			temp = newnode;
		}
		else{
			temp->next = newnode;
			temp = temp->next;
		}
		i++;
	}
	
	temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp -> next;
	}
}


//ass 5 q2

#include<stdio.h>
#include<stdlib.h>
void main(){
	struct node {
		int data ;
		struct node * next ;
	};
	
	struct node * head = NULL , * newnode , * temp;
	int i = 0 ,size;
   	printf("Enter the size of the LINKED LIST : ");
	scanf("%d",&size);
	while ( i<size ){
		newnode = (struct node * )malloc(sizeof(struct node));
		printf("Enter your data : ");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		if ( head == NULL ){
			head = newnode;
			temp = newnode;
		}
		else{
			temp->next = newnode;
			temp = temp->next;
		}
		i++;
	}
	
		newnode = (struct node * )malloc(sizeof(struct node));
		printf("Enter new your data : ");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		temp = head;
		head = newnode;
		newnode->next = temp;
	
	temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp -> next;
	}
}
