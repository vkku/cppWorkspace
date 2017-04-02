#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"\nEnter String\n";
    getline(cin, str);
    for(string::reverse_iterator rev = str.rbegin() ; rev != str.rend() ; rev++)
        cout<<*rev;
    return 0;
}
