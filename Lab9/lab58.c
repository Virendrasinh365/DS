// WAP to check whether 2 singly linked lists are same or not.
#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *first1 = NULL;
struct node *first2 = NULL;
void insertAtFirst(struct node **first) 
{
    int x;
    printf("Enter a Number :- ");
    scanf("%d", &x);

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = x;
    newnode->link = *first; 
    *first = newnode;
    printf("Node inserted at first position \n");
}
void display(struct node *first) {
    struct node *save = first;
    if (first == NULL) {
        printf("List is empty \n");
        return;
    }
    printf("Linked list is: ");
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}
void checkSame(struct node *first1, struct node *first2) {
    struct node *save1 = first1;
    struct node *save2 = first2;

    while (save1 != NULL && save2 != NULL) {
        if (save1->info != save2->info) {
            printf("The linked lists are not the same.\n");
            return;
        }
        save1 = save1->link;
        save2 = save2->link;
    }

    if (save1 == NULL && save2 == NULL) {
        printf("The linked lists are the same.\n");
    } else {
        printf("The linked lists are not the same.\n");
    }
}
int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Insert at first (List 1)\n");
        printf("2. Insert at first (List 2)\n");
        printf("3. Display List 1\n");
        printf("4. Display List 2\n");
        printf("5. Check if lists are the same\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtFirst(&first1);
                break;
            case 2:
                insertAtFirst(&first2);
                break;
            case 3:
                display(first1);
                break;
            case 4:
                display(first2);
                break;
            case 5:
                checkSame(first1, first2);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

