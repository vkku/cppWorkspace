#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int fibo[105] = {0};
    unsigned int realFabo[105] = {0};
    unsigned int term;
    int until;
    cin>>until;
    realFabo[0] = 0;
    realFabo[1] = 1;
    for(int i = 2 ; i < 100 ; i++)
    {
        realFabo[i] = realFabo[i-1] + realFabo[i-2];
        fibo[realFabo[i]] = 1;
    }
    while(until--)
    {
        cin>>term;
        if(fibo[term] == 1)
            cout<<"IsFibo";
        else
            cout<<"IsNotFibo";
    }
    return 0;
}
