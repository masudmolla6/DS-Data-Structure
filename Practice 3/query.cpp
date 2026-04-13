#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>myList;
    int q;
    cin>>q;
    while (q--)
    {
        int idx,val;
        cin >> idx >> val;
        int list_size=myList.size();
        if(idx<0 || idx>list_size){
            cout << "Invalid" <<endl;
            continue;
        }

        if(idx==0){
            myList.push_front(val);
        }
        else if(idx==myList.size()){
            myList.push_back(val);
        }
        else{
            myList.insert(next(myList.begin(),idx), val);
        }

                // Left to Right
        for (int x : myList) {
            cout << x << " ";
        }
        cout << endl;

        // Right to Left
        for (auto it = myList.rbegin(); it != myList.rend(); it++) {
            cout << *it << " ";
        }
        cout << endl;
        
    }
    
    
    return 0;
}