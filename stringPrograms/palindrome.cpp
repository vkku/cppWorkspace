#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string str;
    int flag = 0;
    cout<<"\nEnter String\n";
    getline(cin, str);
    string temp;
    for(unsigned int i = 0 , j = str.size()-1 ;  i < str.size()/2    ;   i++,j--)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            cout<<"\nNot Palindrome\n";
            exit(0);
        }

    }

    if(flag == 0)
        cout<<"\nPalindrome";
    return 0;
}
