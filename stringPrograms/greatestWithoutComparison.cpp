#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"\nEnter Three Numbers\n";
    cin>>num1>>num2>>num3;

    int count = 0;
    while(num1 && num2 && num3)
    {
        num1-- , num2-- , num3-- , count++;
    }
    cout<<"\nSmallest Number is : "<<count;
    return 0;
}
