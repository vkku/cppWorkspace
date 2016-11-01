#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int lonelyinteger(vector < int > a) {
    /*
    int arr[101] = {2};
    std::fill(arr, arr + 101, 2);
    int pos = -1;
    for(int i = 0 ; i < a.size() ; i++)
    {
        arr[a[i]] -= 1;
    }
    /*  -> Start of multiple line comment (Inner)
    for (const int& i : a)
    {
        if(arr[i] == 1)
            pos = &i - &arr[0];
    }
    //  -> This multiple line comment (Inner) ends here
    for(int i = 0 ; i < 100 ; i++)
    {
        if(arr[i] == 1)
            pos = i;
    }

return pos;
*/
    //More efficient with XOR operation
    int xord = 0;
    for(int i = 0 ; i < a.size() ; i++)
        xord = xord ^ a[i];

    return xord;
}

int main() {
    int res;

    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }

    res = lonelyinteger(_a);
    cout << res;

    return 0;
}
