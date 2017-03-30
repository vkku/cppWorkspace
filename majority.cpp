/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int num, elem = 0, save = -1, i, arr[5000], numSave;
//	int arr[5000] = {0};
    for(i = 0 ; i < 5000 ; i++)
        arr[i] = 0;
	cin>>num;
	numSave = num;
	while(num--)
	{
	    cin>>elem;
	    arr[elem] += 1;
	}
	for(i = 0 ; i < 5000 ; i++)
	{
	    if(arr[i] >= numSave / 2)
	    {
	        //cout<<"\n"<<arr[i];
	        save = i;
	    }

	}
	cout<<save;
}
