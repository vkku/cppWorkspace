#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, count = 0;;
    cin>>n;
    int start,endEntry;
    while(n--)
    {
        count = 0;
        cin>>start;
        cin>>endEntry;
        count = (floor(sqrt(endEntry)) - ceil(sqrt(start))) + 1;
        printf("%d\n",count);
    }
    return 0;
}

