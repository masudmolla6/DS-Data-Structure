#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> l){
            // Left to Right
            cout << "L -> ";
            for (int x : l) {
                cout << x << " ";
            }
            cout << endl;

            // Right to Left
            cout << "R -> ";
            for (auto it = l.rbegin(); it != l.rend(); it++) {
                cout << *it << " ";
            }
            cout << endl;
}

int main() {
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x,v;
        cin >>x>>v;
        if(x==0){
            l.push_front(v);
            
            print_list(l);
        }
        else if(x==1){
            l.push_back(v);
            
            print_list(l);
        }
        else if(x==2){
            if(v<0 || l.size()<=v){      
                
                print_list(l);
            }
            else{
                auto targetedNode=next(l.begin(), v);
                l.erase(targetedNode);

                print_list(l);
            }
        }
    }
    
    return 0;
}