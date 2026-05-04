#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> list1={1,2,3,4,5,6};
    // list1<int>list2(list1);
    // list<int>list2;
    // list2=list1;

    // list<int>list2(list1.begin(), list1.end());

    // int a[3]={2,3,5};
    // list<int>list2(a, a+3);

    vector<int> v={2,3,4,5,6};
    list<int> list2(v.begin(), v.end());


    // for (auto it=l.begin(); it!=l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val:list2)
    {
        cout << val << " ";
    }
    
    
    return 0;
}