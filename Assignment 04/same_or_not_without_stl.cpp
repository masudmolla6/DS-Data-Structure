#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_back();
        }

        int top(){
            return l.back();
        }

        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
        }

};


class MyQueue{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_front();
        }

        int front(){
            return l.front();
        }

        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
        }

        int back(){
            return l.back();
        }

};



int main() {
    MyStack st;
    MyQueue q;

    int n,m;

    cin >> n >> m;

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

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // cout << endl;
    
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

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