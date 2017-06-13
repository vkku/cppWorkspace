#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    node* next;
    int info;
};

void push(node** head);
void pop(node** head);
void printList(node** head);
void printMenu();

int main()
{
    node* head = NULL;

    int ch = 0;
    printMenu();
    do
    {
        cout<<"\n\nEnter Choice [ 99 : Menu ]\n";
        cin>>ch;
        switch(ch)
        {
            case            1       :   push(&head);
                                        break;
            case            2       :   pop(&head);
                                        break;
            case            3       :   printList(&head);
                                        break;
            case            0       :   exit(0);
                                        break;
            case            99      :   printMenu();
                                        break;
            default                 :   cout<<"\nWrong Input, Try Again !!!";

    }


    }while(ch != 0);
    return 0;
}
void printMenu()
{
    cout<<"\n************* LINKED LIST AS STACK *************";
    cout<<"\nCHOICE     OPERATION";
    cout<<"\n";
    cout<<"\n[ 1  ]        Insert Element\n";
    cout<<"\n[ 2  ]        Delete Element\n";
    cout<<"\n[ 3  ]        Print List\n";
    cout<<"\n[ 99 ]        To print this menu again any time later\n";
    cout<<"\n*************************************************";
}

/*
ToDo    :   Make available a max cap for entering elements
*/
void push(node** head)
{
    node* temp = (node*)malloc(sizeof(node));
    cout<<"\nEnter Element\n";
    cin>>temp -> info;
    temp -> next = NULL;
    if(*head == NULL)
    {
        *head = temp;
    }
    else
    {
        temp -> next = *head;
        *head = temp;
    }
    return;
}

void pop(node** head)
{
    if(*head == NULL)
    {
        cout<<"\nEmpty Stack";
        exit(0);
    }
    //Single Element
    if((*head) -> next == NULL)
    {
        cout<<"\nDeleting : "<<(*head) -> info;
        *head = NULL;
    }
    else
    {
        cout<<"\nDeleting : "<<(*head) -> info;
        *head = (*head) -> next;
    }


    return;
}

void printList(node** head)
{
    node* temp = *head;
    if(temp -> next == NULL)
    {
        cout<<temp -> info<<"\n";
    }
    else
    {
     while(temp != NULL)
     {
        cout<<"\n\t| "<<temp -> info<<"\t|";
        temp = temp -> next;
     }
    }

    return;
}
