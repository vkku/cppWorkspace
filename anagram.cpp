#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>

using namespace std;

int main()
{
    string arr[100];
    int n;
    int count[500] = {0};
    string word, curr;

    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    for(int j = 0 ; j < n ; j++)
    {
        word = arr[j];

        for(int k = 0 ; k < word.length() ; k++)
        {
            count[word[k]] += 1;
            cout<<word[k];
        }


    }
    for(int i = 0 ; i < 100 ; i++)
        cout<<count[i];

}
