#include <bits/stdc++.h>
using namespace std;

int main() {
    // list<int>l;
    // cout << l.size() << endl;
    // cout << l.max_size() << endl;

    list<int> l={2,3,5,7,8};
    
    // l.clear();
    // cout << l.size() << endl;

    // if(l.empty()){
    //     cout << "Yes List is Empty" << endl;
    // }
    // else{
    //     cout << "No List is Not empty" << endl;
    // }

    l.resize(9);

    for(int val:l){
        cout << val << " ";
    }

    // cout << l.size() << endl;

    return 0;
}