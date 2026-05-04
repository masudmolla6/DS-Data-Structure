#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>list1={2,3,5,6,7};
    list<int>list2;
    // list2=list1;
    list2.assign(list1.begin(), list1.end());

    // list2.push_front(100);
    // list2.push_back(200);

    // list2.pop_front();
    // list2.pop_back();

    // cout << *next(list2.begin(), 2) << endl;

    list2.insert(next(list2.begin(), 2), 240);

    for (int val:list2)
    {
        cout << val << " ";
    }
    
    return 0;
}