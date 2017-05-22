#include<iostream>
#include<stdlib.h>

void bubbleSort(long int num[], int len_arr,int* iterations);
using namespace std;
int main()
{
    long int num[100000];
    int len_arr = 0;
    int len = 0;
    int* hop = (int *)malloc(sizeof(int));

    *hop = 0;
    cout<<"\nEnter Input Size\n";
    cin>>len;

    for(int i = 0 ; i < len ; i++)
    {
        num[i] = rand();
    }

    //len_arr = ( sizeof(num) / sizeof(num[0]) );
    len_arr = len;

    bubbleSort(num, len_arr,hop);

    for(int i = 0 ; i < len ; i++)
    {
        cout<<"\n"<<num[i];
    }
    cout<<"\n\nBubbled"<<" [ "<<*hop<<" ] "<<"Time/s\n";
    cout<<"\n";
}

void bubbleSort(long int num[], int len_arr, int* hop)
{
    for(int i = 0 ; i < len_arr ; i++)
    {
        for(int j = len_arr ; j > i ; j--)
        {
            if(num[j] < num[j-1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j-1];
                num[j-1] = temp;
                (*hop)++;
            }
        }
    }
    //return hop;
}
