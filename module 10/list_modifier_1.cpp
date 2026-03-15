#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l={102, 23, 45, 67};
    list<int>l2;
    // l2=l;
    l2.assign(l.begin(), l.end());

    // l2.push_back(50);
    // l2.push_front(500);

    // l2.pop_back();
    // l2.pop_front();

    // cout << *next(l.begin(), 2) << endl;

    list<int> l3={23,45,67,78};
    vector<int> v={23,45,76,89};

    // l.insert(next(l.begin(), 2), 423);
    // l.insert(next(l.begin(), 2), l3.begin(), l3.end());

    l.insert(next(l.begin(), 2), v.begin(), v.end());



    for(int val:l){
        cout << val << " ";
    }
    return 0;
}