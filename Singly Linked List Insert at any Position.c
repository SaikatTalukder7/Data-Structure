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

struct node* insertAtPosition(struct node* head, int data, int position) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data;

    if (position == 0) {
        ptr->next = head;
        head = ptr;
        return head;
    }

    struct node* temp = head;
    int count = 0;

    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(ptr);
        return head;
    }

    ptr->next = temp->next;
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

    int new_data, position;
    printf("Enter data to insert: ");
    scanf("%d", &new_data);
    printf("Enter the position to insert the data: ");
    scanf("%d", &position);

    printf("\nBefore Insertion:\n");
    linkedTraversal(head);

    head = insertAtPosition(head, new_data, position);

    printf("\nAfter Insertion:\n");
    linkedTraversal(head);

    return 0;
}

