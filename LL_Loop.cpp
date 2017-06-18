// C program to detect loop in a linked list - Floyd's cycle finding algorithm
#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
          (struct node*) malloc(sizeof(struct node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

struct node* detectloop(struct node *list)
{
    struct node  *slow_p = list, *fast_p = list;

    while (slow_p && fast_p )
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;
        if (slow_p == fast_p)
        {
           //printf("Found Loop");
           return slow_p;
        }
    }
    printf("\nNo Loop Exists !");
    return 0;
}

void removeLoop(struct node* head, struct node* loop_ptr)
{
    struct node* looper = loop_ptr;
    struct node* dest = head;
    while(looper -> next != dest)
    {
        if(looper -> next == loop_ptr)
        {
            dest = dest -> next;
        }
        looper = looper -> next;        //Positioning of this statement is mandatory here
    }
    looper -> next = NULL;

}

void printList(struct node* head)
{
    struct node* disp = head;
    while(disp != NULL)
    {
        printf("\t%d",disp -> data);
        disp = disp -> next;
    }
}

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    struct node* ptr = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;
    ptr = detectloop(head);
    removeLoop(head, ptr);
    printList(head);

    return 0;
}
