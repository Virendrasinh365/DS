/*  57. Write a menu driven program to implement following operations on the singly 
linked list.  
• Insert a node at the front of the linked list. 
• Display all nodes. 
• Delete a first node of the linked list. 
• Insert a node at the end of the linked list. 
• Delete a last node of the linked list. 
• Delete a node from specified position. 
• count the number of nodes
*/
#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *first =NULL;

void insertAtFirst(){
    int x;
    printf("Enter a Number :-");
    scanf("%d",&x);

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode ->info = x;
    newnode ->link = first; 
    first = newnode;
    printf("node inserted at first position \n");

}
void display(){
    struct node *save = first;
    if (first == NULL){
        printf("list is empty ");
        return;
    }
    printf("linked list is :- ");
    while (save != NULL){
        printf("%d -> ",save -> info);
        save = save->link;
    }
}

void deleteNode(){
    int x;
    printf("Enter a value of X  you want to delete : -");
    scanf("%d",&x);

    struct node *save = first;
    struct node *pred = first;
    while (save -> link != NULL && save -> info !=x){
        pred = save;
        save = save -> link;
    }
    if (save -> info != x ){
        printf("Node Not Found .");
        return;
    }
    if (x == first->info){
        first = first ->link;
    }
    else{
        pred -> link = save ->link;
    }
    free(save);
    free(pred);
   
}

void main(){
    
   
    insertAtFirst();
    insertAtFirst();
    insertAtFirst();
    display();
    deleteNode();
    display();
}
