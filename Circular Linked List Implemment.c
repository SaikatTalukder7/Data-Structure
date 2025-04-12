//Circular Linked List Implemment
#include<stdio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node *next;
     };

void linkedTraversal(struct node* head){
    struct node *ptr= head;
    do{
     printf("element: %d\n", ptr->data);
     ptr=ptr->next;
    } while(ptr != head);
}

struct node * insertAtFirst(struct node * head, int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head->next;

    while(p->next!=head)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next= head;
    head=ptr;
    return head;
}
int main()
{
     struct node * head;
     struct node * second;
     struct node * third;

     head = (struct node *) malloc(sizeof(struct node));
     second = (struct node *) malloc(sizeof(struct node));
     third = (struct node *) malloc(sizeof(struct node));

     printf("Enter data for first node: ");
     scanf("%d", &head->data);
     head->next = second;

     printf("Enter data for second node: ");
     scanf("%d", &second->data);
     second->next = third;

     printf("Enter data for third node: ");
     scanf("%d", &third->data);
     third->next = head;

     int value;
     printf("enter the value want to insert: ");
     scanf("%d",&value);

     printf("Linked list before insert\n");
     linkedTraversal(head);

     head = insertAtFirst(head,value);
     printf("Linked list after insert\n");
     linkedTraversal(head);

     return 0;
}




