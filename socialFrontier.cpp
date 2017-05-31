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
void delPos(node** head, node** current);

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
    cout<<"\n\nEnter Choice [ 99 : Menu ]\n";
    cin>>ch;
        switch(ch)
        {
            case    1   :   createNode(&head, &current);
                            break;

            case    2   :   traverse(head);
                            break;

            case    3   :   delPos(&head, &current);
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
    cout<<"\n[ 3  ]        Delete Element\n";
    cout<<"\n[ 99 ]        To print this menu again any time later\n";
    cout<<"\n[ 0  ]        Exit\n";
}

void createNode(node** head, node** current)
{
    cout<<"\n** INSERT **";
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
    cout<<"\n** PRINT **\n";
    node* temp;
    temp = head;
    if(temp == NULL)
        cout<<"\nEmpty List\n";
    else
    {
        do
        {
            cout<<temp->info<<"  ->  ";
            temp = temp -> next;
        }while(temp != NULL);
    }

}

/*
ToDo
1. Check for invalid position input

*/
void delPos(node** head, node** current)
{
    node* pred = *head;     //Predecessor to the node to be deleted
    node* succ = pred;      //Successor to the node to be deleted
    int cnt = 0;
    int pos = 1;
    cout<<"\n** DELETE **";
    cout<<"\nEnter Position [Starting from 1]\n";
    cin>>pos;

    if(pos == 1)
    {
        *head = (*head) -> next;
    }
    else
    {
        while(cnt++ < pos-2)
        {
            pred = pred -> next;
        }

        succ = pred;

        for(int i = 0 ; i < 2 ; i++)
        {
            succ = succ -> next;
        }
        //cout<<"\nPredecessor : "<<pred->info;
        //cout<<"\nSuccessor : "<<succ->info;
        if(succ == NULL)
        {
            *current = pred;
            pred -> next = NULL;
        }
        else
        {
            pred -> next = succ;
        }
    }

    cout<<"\nNode at Position [ "<<pos<<" ] Deleted Succesfully";
}




















