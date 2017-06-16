#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    long int records = 0;
    cin>>records;
    int roll[1000000];
    int query = 0;
    int rno = 0;;
    string name[100000];

    for(int i = 0 ; i < records ; i++)
    {
        cin>>roll[i];
        cin>>(name[i]);
    }
    cin>>query;
    for(int i = 0 ; i < query ; i++)
    {
        cin>> rno;
        for(int i = 0 ; i < records ; i++)
            if(roll[i] == rno)
                cout<<name[i]<<"\n";
    }

    return 0;
}
