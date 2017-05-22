#include<iostream>
#include<stdlib.h>

using namespace std;

void changeFunc(int* hop)
{
    *hop =50;
}
int main()
{
    int* hop = (int *)malloc(sizeof(int));
    *hop = 0;
    changeFunc(hop);
    cout<<*hop;
}
