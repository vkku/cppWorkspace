/*
Name    :   Vivek Kumar
Date    :   29/06/2017
Subject :   Sorting Algorithms
*/

#include<iostream>
#include<stdlib.h>

void bubbleSort(long int num[], int len_arr,long int* iterations);
void swapPos(long int num[], int succ, int pred);
using namespace std;
int main()
{
    long int num[100000];
    int len_arr = 0;
    int len = 0;
    long int* hop = (long int *)malloc(sizeof(int));

    *hop = 0;
    cout<<"\nEnter Input Size\n";
    cin>>len;

    for(int i = 0 ; i < len ; i++)
    {
        num[i] = rand();
        //cin>>num[i];
    }
    cout<<"\nInput Array\n";
    for(int i = 0 ; i < len ; i++)
    {
        cout<<"\n"<<num[i];
    }

    len_arr = len;

    bubbleSort(num, len_arr,hop);           //BUBBLE SORT

    cout<<"\n\nSorted\n";
    for(int i = 0 ; i < len ; i++)
    {
        cout<<"\n"<<num[i];
    }
    cout<<"\n\nBubbled"<<" [ "<<*hop<<" ] "<<"Time/s\n";
    cout<<"\n";
}



/*

Input :
num[]   :   Array
len_arr :   Length of Array
*hop    :   Pointer Variable to hold number of swaps

Output  :   Sorts given array according to bubble sort, no values returned.

*/
void bubbleSort(long int num[], int len_arr, long int* hop)
{
    bool flag = true;
    int i = 0;
    for(i = 0 ; i < len_arr && flag == true ; i++)
    {
        flag = false;
        for(int j = len_arr - 1 ; j > i ; j--)
        {
            if(num[j] < num[j-1])
            {
                //Swapping Elements
                swapPos(num, j, j-1);
                flag = true;
                (*hop)++;
            }
        }
    }
}

void swapPos(long int num[], int succ, int pred)
{
    int temp;
    temp = num[succ];
    num[succ] = num[pred];
    num[pred] = temp;
}
