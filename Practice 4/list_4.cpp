#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>myList={5,2,5,2,7,4,8,49,3,8};
    // myList.remove(5);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.reverse();
    myList.unique();

    for (int val:myList)
    {
        cout << val << " ";
    }
    
    return 0;
}