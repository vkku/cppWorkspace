#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int term;
    int finalDecision;
    int until = 0;
    cin>>until;
    while(until--)
    {
        cin>>term;
        finalDecision = 0;
        int first = sqrt(5 * pow(term,2) + 4);
        int second = sqrt(5 * pow(term,2) - 4);
        finalDecision = ((first % 1 == 0) || (second % 1 == 0));
        if(finalDecision)
            cout<<"IsFibo\n";
        else
            cout<<"IsNotFibo\n";
    }
    return 0;
}
