#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void linkedTraversal(struct node* head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node* insertAtFirst(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;

    if (head != NULL) {
        head->prev = ptr;
    }

    head = ptr;
    return head;
}
int main() {
    struct node *head = NULL;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    printf("Enter data for first node: ");
    scanf("%d", &head->data);
    head->next = second;
    head->prev = NULL;

    printf("Enter data for second node: ");
    scanf("%d", &second->data);
    second->next = third;
    second->prev = head;

    printf("Enter data for third node: ");
    scanf("%d", &third->data);
    third->next = NULL;
    third->prev = second;

    int value;
    printf("Enter the value to insert at the beginning: ");
    scanf("%d", &value);

    printf("Linked list before insert:\n");
    linkedTraversal(head);

    head = insertAtFirst(head, value);

    printf("Linked list after insert:\n");
    linkedTraversal(head);

    return 0;
}
