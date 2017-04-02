#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
    int num[50], sum = 0, i =0;
    int flag = 0;
    cout<<"\nEnter array\n";
    for(i = 0   ;   i < 5   ;   i++)
    {
        cout<<"\nElement"<<i+1<<" : ";
        cin>>num[i];
    }
    cout<<"\nEnter Sum\n";
    cin>>sum;
    int temp = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        int del = 0;
        temp += num[i];
        if(temp > sum)
            temp -= num[del++];
        if(temp == sum)
        {
            cout<<"\nSubstring : [ "<<del+1<<": "<<i+1<<" ]";
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"\nNo Substr found\n";



    return 0;
}
