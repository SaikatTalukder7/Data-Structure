#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedTraversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int searchElement(struct node* head, int target) {
    struct node* current = head;
    int position = 1;

    while (current != NULL) {
        if (current->data == target) {
            return position;
        }
        current = current->next;
        position++;
    }

    return -1;
}

int main() {
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    printf("Enter the data for the first node: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("Enter the data for the second node: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter the data for the third node: ");
    scanf("%d", &third->data);
    third->next = NULL;

    printf("Linked List Elements:\n");
    linkedTraversal(head);

    int target;
    printf("\nEnter the element you want to search for: ");
    scanf("%d", &target);

    int position = searchElement(head, target);

    if (position != -1) {
        printf("\nElement %d found at position %d.\n", target, position);
    } else {
        printf("\nElement %d not found in the linked list.\n", target);
    }

    return 0;
}
