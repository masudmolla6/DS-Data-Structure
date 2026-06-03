#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool flag=true;

    if(st.size()!=q.size()){
        cout << "NO" << endl;
        return 0;
    }
    else{
        while (!st.empty() && !q.empty())
        {
            if(st.top()!=q.front()){
                flag=false;
                break;
            }
            else{
                st.pop();
                q.pop();
            }     
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    

    return 0;
}