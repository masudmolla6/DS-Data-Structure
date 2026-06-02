#include <bits/stdc++.h>
using namespace std;

int main() {
    int query;
    queue<string> q;
    cin >> query;
    while (query--)
    {
        string cmd;
        cin >> cmd;
        if(cmd=="JOIN"){
            string name;
            cin >> name;
            q.push(name);
        }
        else if(cmd=="DONE"){
            if(q.empty()){
                cout << "No Students" << endl;
            }
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    
    return 0;
}