#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l={2,3,4,5, 34,45,67, 56,34,93};
    // l.erase(next(l.begin(), 3));
    // l.erase(next(l.begin(), 3), next(l.begin(), 6));
    // replace(l.begin(), l.end(), 34, 200);

    auto it=find(l.begin(), l.end(), 34);

    if(it==l.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    // for(int val:l){
    //     cout << val << " ";
    // }
    
    return 0;
}
