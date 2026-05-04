#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> list1={2,3,4,5, 34,45,67, 56,34,93};
    list1.erase(next(list1.begin(), 3));

    // list1.erase(next(list1.begin(), 3), next(list1.begin(), 6));

    // replace(list1.begin(), list1.end(), 34, 200);

    auto it =find(list1.begin(), list1.end(), 34);

    // cout << *it <<endl;

    // for (int val:list1)
    // {
    //     cout << val << " ";
    // }

    if(it==list1.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    return 0;
}