#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>list1={12,34,56,87};
    list<int>list2;
    // list2=list1;

    list2.assign(list1.begin(), list1.end());

    // list2.push_front(100);
    // list2.push_back(200);

    // list2.pop_front();
    // list2.pop_back();

    // list<int> list3={89,56,23,78,90};

    // list2.insert(next(list2.begin(), 2), 500);
    // list2.insert(next(list2.begin(), 2), list3.begin(), list3.end());
    // cout << *next(list2.begin(), 2) << endl;

    list2.erase(next(list3.begin(), 2));


    for (auto it = list2.begin(); it != list2.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}