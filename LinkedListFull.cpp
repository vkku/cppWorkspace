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
void insPos(node** head, node** current);
void revll(node** head, node** current);

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

            case    2   :   insPos(&head, &current);
                            break;

            case    3   :   traverse(head);
                            break;

            case    4   :   delPos(&head, &current);
                            break;

            case    5   :   revll(&head, &current);
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
    cout<<"\n[ 2  ]        Insert Element at any position\n";
    cout<<"\n[ 3  ]        Display Elements\n";
    cout<<"\n[ 4  ]        Delete Element at any position\n";
    cout<<"\n[ 5  ]        Reverse Linked List\n";
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
    temp -> next = NULL;        //Extra layer of protection

    if(*head == NULL)
    {
        *head = temp;
        *current = *head;
        (*head) -> next = NULL;
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
        if(succ == NULL)                        //In case last element is to be deleted
        {                                       //Moving *current pointer to appropriate position
            *current = pred;                    //As to facilitate further insertion
            pred -> next = NULL;
        }
        else
        {
            pred -> next = succ;
        }
    }

    cout<<"\nNode at Position [ "<<pos<<" ] Deleted Succesfully";
}

/*
ToDo
1. Check for invalid position input

*/
void insPos(node** head, node** current)
{
    int pos;
    int cnt = 0;
    node* temp = (node* )malloc(sizeof(node* ));
    node* pred = *head;     //Predecessor to the node to be deleted
    node* succ = pred;      //Successor to the node to be deleted
    cout<<"\nEnter Position\n";
    cin>>pos;
    cout<<"\nEnter Element\n";
    cin>>temp -> info;
    temp -> next = NULL;

    if(pos == 1)
    {
        temp -> next = *head;
        *head = temp;

        if((*head) -> next == NULL)
        {
            *current = *head;           //In case user enters 1st element by this method
        }                               //But 2nd with Insert Element option
    }

    else
    {
        //Finding Predecessor and Successor
        while(cnt++ < pos-2)
        {
            pred = pred -> next;
        }

        succ = pred -> next;

        pred -> next = temp;
        temp -> next = succ;
    }

}

void revll(node** head, node** current)
{
    node* pred;
    node* succ;
    node* curr;
    node* save;

    pred = *head;
    curr = (*head) -> next;
    if(curr != NULL)
    {
        succ = curr -> next;
    }

    save = pred;

    //Check for single element
    if(curr == NULL)
    {
        succ = NULL;
    }

    //Change current pointer as to facilitate insertion after reversal
    *current = pred;

    while(succ != NULL)
    {

        //Change Links ( -> to <- )
        curr -> next = pred;

        //Update pointers
        pred = curr;
        curr = succ;
        succ = succ -> next;
    }
    if(curr != NULL)                //Check in case of single node
    {
        curr -> next = pred;        //Linking the last node
        save -> next = NULL;        //to facilitate printing of LL
        *head = curr;               //The new LL starts from back now
    }


}







