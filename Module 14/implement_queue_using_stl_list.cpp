#include <bits/stdc++.h>
using namespace std;

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
    MyQueue qe;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        qe.push(val);
    }

    // if(!qe.empty())
    //     cout<<qe.front()<<endl;


    while (!qe.empty())
    {
        cout << qe.front() << " ";
        qe.pop();
    }
    
    
    
    return 0;
}