#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node
{
    int info;
    node* next;
};

void printMenu();
void createNode(node** head, node** current);
void traverse(node* head);

int main()
{
    node* head = NULL;
    node* current = head;

    //head = (node* )malloc(sizeof(node));
    //current = (node* )malloc(sizeof(node));



    int ch = 0;
    printMenu();
    do
    {
    cout<<"\nEnter Choice\n";
    cin>>ch;
        switch(ch)
        {
            case    1   :   createNode(&head, &current);
                            break;

            case    2   :   traverse(head);
                            break;

            case    0   :   cout<<"\nExit";
                            break;

            case    99  :   printMenu();
                            break;

            default     :   cout<<"\nWrong Choice";
                            break;
        }
    }while(ch != 0);

    return 0;
}


void printMenu()
{
    cout<<"\n======================= LINKED LIST IMPLEMENTATION =======================";
    cout<<"\nCHOICE     OPERATION";
    cout<<"\n";
    cout<<"\n[ 1  ]        Insert Element\n";
    cout<<"\n[ 2  ]        Display Elements\n";
    cout<<"\n[ 99 ]        To print this menu again any time later\n";
    cout<<"\n[ 0  ]        Exit\n";
}

void createNode(node** head, node** current)
{
    node* temp;
    temp = (node* )malloc(sizeof(node));
    cout<<"\nEnter Data\n";
    cin>>temp -> info;

    if(*head == NULL)
    {
        *head = temp;
        *current = *head;
    }
    else
    {
        (*current) -> next = temp;
        *current = (*current) -> next;
        (*current) -> next = NULL;
    }
}


void traverse(node* head)
{
    node* temp;
    temp = head;
    if(temp == NULL)
        cout<<"\nEmpty List\n";
    else
    {
        do
        {
            cout<<"  ->  "<<temp->info;
            temp = temp -> next;
        }while(temp -> next != NULL);
    }

}





















