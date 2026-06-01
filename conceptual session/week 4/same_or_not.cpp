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

int main() {
    MyStack st1,st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    // while (!st1.empty())
    // {
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }

    // cout << endl;

    // while (!st2.empty())
    // {
    //     cout << st2.top() << " ";
    //     st2.pop();
    // }

    bool flag=true;

    if(st1.size()!=st2.size()){
        flag=false;
    }
    else{
        while (!st1.empty() && !st2.empty())
        {
            if(st1.top()!=st2.top()){
                flag=false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        
    }

    // if(flag==true){
    //     cout << "Same" << endl;
    // }
    // else{
    //     cout << "Not Same" << endl;
    // }

    cout << (flag ? "Same" : "Not Same") << endl;
    
    
    return 0;
}