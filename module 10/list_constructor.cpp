#include <bits/stdc++.h>
using namespace std;

int main() {
    // list<int> l;
    // list<int> l(10);
    // list<int> l(4, 3);

    // list<int> l={1,2,3,4,5};
    // list<int> l2(l);

    // int a[3]={2,3,5};
    // list<int> l2(a, a+3);

    vector<int>v={12,3,6,3};
    list<int>l2(v.begin(), v.end());


    // cout << *l.begin() << endl;


    // print using iterator
    // for (auto it=l.begin(); it!=l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // print using rang base for loop

    for (int val:l2)
    {
        cout << val << " ";
    }
    
    

    // cout << l.size() << endl;
    return 0;
}