//Linked list Traversal
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
    printf("element: NULL\n");
}
int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    scanf("%d", &head->data);
    head->next = second;
    scanf("%d", &second->data);
    second->next = third;
    scanf("%d", &third->data);
    third->next = NULL;
    linkedTraversal(head);
    return 0;
}

