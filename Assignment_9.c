// Delete from the start

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *temp, *tail;


void create(int key)
{
    for (int i = 1; i <= key; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->prev = NULL;
        printf("Enter your DATA : ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
            tail = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
            tail = newnode;
        }
    }
}


void display()
{
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}




void delformbeg(){
    temp = head;
    head = head -> next;
    temp -> next = NULL;
    head -> prev = NULL;
    free(temp);
}



int main(){
    int key;
    printf("Enter the size of your list : ");
    scanf("%d",&key);
    create(key);
    display();
    printf("\n");
    delformbeg();
    printf("Now your list is : ");
    display();
}

//OUTPUT
// Enter the size of your list : 5
// Enter your DATA : 7
// Enter your DATA : 9
// Enter your DATA : 6
// Enter your DATA : 4
// Enter your DATA : 2
// 7 9 6 4 2 
// Now your list is :
// 9 6 4 2 

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Delete form the given position

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *temp, *tail;


void create(int key)
{
    for (int i = 1; i <= key; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->prev = NULL;
        printf("Enter your DATA : ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
            tail = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
            tail = newnode;
        }
    }
}


void display()
{
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}


void delfrompos(){
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    int i=1;
    temp = head;
    while(i<pos){
        temp = temp -> next;
        i++;
    }
    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
    temp -> next = NULL;
    temp -> prev = NULL;
    free(temp);
}


int main(){
    int key;
    printf("Enter the size of your list : ");
    scanf("%d",&key);
    create(key);
    display();
    printf("\n");
    delfrompos();
    printf("Now your list is : ");
    display();
}

//OUTPUT
// Enter the size of your list : 5
// Enter your DATA : 9
// Enter your DATA : 6
// Enter your DATA : 3
// Enter your DATA : 8
// Enter your DATA : 2
// 9 6 3 8 2
// Enter the position : 3
// Now your list is : 9 6 8 2

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Delete from the end

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *temp, *tail;


void create(int key)
{
    for (int i = 1; i <= key; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->prev = NULL;
        printf("Enter your DATA : ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
            tail = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
            tail = newnode;
        }
    }
}


void display()
{
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}


void delfromend(){
    temp = tail;
    tail = tail -> prev;
    tail -> next = NULL;
    temp -> prev = NULL;
    free(temp);

}


int main(){
    int key;
    printf("Enter the size of your list : ");
    scanf("%d",&key);
    create(key);
    display();
    printf("\n");
    delfromend();
    printf("Now your list is : ");
    display();
}

//OUTPUT
// Enter the size of your list : 5
// Enter your DATA : 7
// Enter your DATA : 1
// Enter your DATA : 8
// Enter your DATA : 2
// Enter your DATA : 6
// 7 1 8 2 6
// Now your list is : 7 1 8 2
