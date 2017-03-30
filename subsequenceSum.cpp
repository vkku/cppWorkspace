#include<iostream>
int main()
{
    int arr[50] = {1,2,3,4,5};
    int sum = 0, currSum = 0, subIndex = 0;;
    int i = 0;
    cout<<"\nEnter Proposed Sum\n";
    cin>>sum;
    currSum = 0;
    subIndex = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        currSum += arr[i];
        if(currSum > sum)
            currSum -= arr[subIndex++];
        else if(currSum == sum)
        {
            cout<<"\nSubsequence is : "<<subIndex+1<<i+1;
            exit(0);
        }
    }
    return 0;
}
