/*
Vivek Kumar
18/10/2016 - 23:34
Implementation of STL in C++
MIT License
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cout<<"Enter your name"<<endl;
    getline(cin, str);
    //cout<<str.capacity();     <- why greater for >3 chars
    string greeting = "Good Day ";
    string message = greeting.append(str);
    cout<<message<<endl;
    cout<<"I can spell that out in hex"<<endl;
    for(string::iterator walker = str.begin()   ;   walker != str.end() ;   walker++)
        std::cout<<std::hex<<(int)*walker;
    cout<<endl<<"Now in reverse order"<<endl;
    for(string::reverse_iterator revWalker = str.rbegin()   ;   revWalker != str.rend() ;   revWalker++)    //Notice Incrementing the reverse pointer
        cout<<*revWalker;
    cout<<endl<<"Had you seen it this way, looks great !!!"<<endl;
    cout<<"Astrology says people with name starting in "<<"\""<<(char)toupper(str.at(0))<<"\""<<" are found to be lucky.";
    return 0;
}
