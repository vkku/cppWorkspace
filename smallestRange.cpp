#include<iostream>
#include<stdlib.h>

int greatest(int a, int b, int c);
int smallest(int a, int b, int c);

using namespace std;

int main()
{
    int hmap[1000] = {0};
    int arr1[10] = {0}, arr2[10] = {0}, arr3[10] = {0};
    int size1 = 0, size2 = 0, size3 = 0;
    int flag1 = 0, flag2 = 0, flag3 = 0, loc1, loc2, loc3;
    int trackarr[500] = {0};
    int index = -3;

    cout<<"Array 1 size ?\n";
    cin>>size1;
    for(int i = 0 ; i < size1 ; i++)
    {
        cin>>arr1[i];
        hmap[arr1[i]] = 1;
    }
    cout<<"Array 2 size ?\n";
    cin>>size2;
    for(int i = 0 ; i < size2 ; i++)
    {
        cin>>arr2[i];
        hmap[arr2[i]] = 2;
    }
    cout<<"Array 3 size ?\n";
    cin>>size3;
    for(int i = 0 ; i < size3 ; i++)
    {
        cin>>arr3[i];
        hmap[arr3[i]] = 3;
    }

    cout<<"\n";
    for(int i = 0 ; i <= 50 ; i++)
        cout<<"|"<<i<<" ->\t"<<hmap[i]<<"|";


    for(int i = 0 ; i < 1000 ; i++)
    {
        if(hmap[i] == 1)
        {
            flag1 = 1;
            loc1 = i;
        }

        if(hmap[i] == 2)
        {
            flag2 = 1;
            loc2 = i;
        }

        if(hmap[i] == 3)
        {
            flag3 = 1;
            loc3 = i;
        }

        if(flag1 && flag2 && flag3)
        {
            //cout<<"\nLoc1 : Loc2 : Loc3\n"<<loc1<<" : "<<loc2<<" : "<<loc3<<"\n";
            index += 3;
            trackarr[index] = greatest(loc1, loc2, loc3) - smallest(loc1, loc2, loc3);
            trackarr[index+1] = smallest(loc1, loc2, loc3);
            trackarr[index+2] = greatest(loc1, loc2, loc3);
            flag1 = flag2 = flag3 = 0;
        }
    }

    int smallest = trackarr[0];
    int smallLoc = 0;
    for(int i = 0 ; i < 500 ; i = i+3)
    {
        cout<<"|\t"<<trackarr[i]<<"|";
        if(trackarr[i] < smallest)
        {
            smallest = trackarr[i];
            smallLoc = i;
        }

    }
    /*
    if(flag1 && flag2 && flag3)
    {
        cout<<"\nSmallest Range is : [ "<<smallest(loc1, loc2, loc3)<<" : "<<greatest(loc1, loc2, loc3)<<" ] \n";
    }
    */
    cout<<"\nSmallest Range is : [ "<<trackarr[smallLoc+1]<<" : "<<trackarr[smallLoc+2]<<" ] \n";
    return 0;
}

int greatest(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}

int smallest(int a, int b, int c)
{
    if(a < b && a < c)
        return a;
    else if(b < a && b < c)
        return b;
    else
        return c;
}
