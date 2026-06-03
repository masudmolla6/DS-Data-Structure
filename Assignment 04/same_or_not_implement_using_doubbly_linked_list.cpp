#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* prev;
        Node* next;

    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

class MyStack{
    public:
        Node* head=NULL;
        Node* tail=NULL;

        int countNode=0;

        void push(int val){
            Node* newNode=new Node(val);

            countNode++;

            if(head==NULL){
                head=newNode;
                tail=newNode;
                return;
            }

            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }

        void pop(){
            if(head==NULL){
                return;
            }

            countNode--;

            Node* deletedNode=tail;

            if(head==tail){
                delete deletedNode;
                head=NULL;
                tail=NULL;
                return;
            }

            tail=tail->prev;
            tail->next=NULL;

            delete deletedNode;
        }

        int top(){
            return tail->val;
        }

        int size(){
            return countNode;
        }

        bool empty(){
            return head==NULL;
        }


};

class MyQueue{
    public:
        Node* head=NULL;
        Node* tail=NULL;

        int countNode=0;

        void push(int val){
            Node* newNode=new Node(val);

            countNode++;

            if(head==NULL){
                head=newNode;
                tail=newNode;
                return;
            }

            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }

        void pop(){
            if(head==NULL){
                return;
            }

            countNode--;

            Node* deletedNode=head;

            if(head==tail){
                delete deletedNode;
                head=NULL;
                tail=NULL;
                return;
            }

            head=head->next;
            head->prev=NULL;

            delete deletedNode;
        }

        int front(){
            return head->val;
        }

        int size(){
            return countNode;
        }

        bool empty(){
            return head==NULL;
        }

        int back(){
            return tail->val;
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