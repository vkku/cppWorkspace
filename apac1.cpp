#include <iostream>
#include<string>
#include<stdio.h>
#include<fstream>

std::ifstream cin("A-small-attempt0.in");
std::ofstream cout("A-small-attempt0.out");


int main() {
    int num;
    char str[100];
    int startI = 0, endI = 0;
    int sizeI = 0;
    int strCount = 0;
    int flag = 0;
    int blue = 0;
    int result = 0;
    cin >> num;
    while(num--)
    {
        blue = 0;
        result = 0;
        startI = endI = strCount = 0;
        flag = 0;
        int times = 0;
        int addB = 0;
        //cin.ignore();
        cin>> str;
        cin>>startI;
        cin>>endI;
        sizeI = endI - startI;
        for(int i = 0 ; str[i] != '\0' ; i++)
        {
            strCount++;
            if(str[i] == 'B')
                blue++;
        }
        if( (strCount % endI == 0) && (strCount % startI == 0) )
        {
            result = ( (endI - startI) / strCount ) * blue;
        }
        else
        {
            while((endI % strCount) != 0)
            {
                endI--;
                if(str[endI - 1] == 'B')
                    addB++;
            }
            if(startI-1 % strCount != 0)
            {
                startI--;
            }

            result = ( (endI - startI) / strCount ) * blue;
            result += addB;
        }

        //int whole = sizeI / startI;
    }

    cout<<result;
}
