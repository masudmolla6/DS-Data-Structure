#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList={23,45,12,45,67,78};

    // cout << myList.front() << endl;
    // cout << myList.back() << endl;
    // cout << *myList.begin() << endl;
    // cout << *myList.end() << endl;
    cout << *next(myList.begin(), 1) << endl;

    // for (int val:myList)
    // {
    //     cout << val << " ";
    // }
    
    return 0;
}