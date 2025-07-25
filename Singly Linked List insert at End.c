#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void linkedTraversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node* insertAtEnd(struct node* head, int data) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) {
        return ptr;
    }

    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ptr;
    return head;
}

int main() {
    struct node* head;
    struct node* second;
    struct node* third;

    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    printf("Enter data for first node: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("Enter data for second node: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter data for third node: ");
    scanf("%d", &third->data);
    third->next = NULL;

    int new_data;
    printf("Enter data to insert at the end: ");
    scanf("%d", &new_data);

    printf("\nBefore Insertion:\n");
    linkedTraversal(head);

    head = insertAtEnd(head, new_data);

    printf("\nAfter Insertion:\n");
    linkedTraversal(head);

    return 0;
}
