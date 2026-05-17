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

        int sz=0;


        void push(int val){
            sz++;
            Node* newNode=new Node(val);

            if(tail==NULL){
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

            Node* deletedNode=tail;
            sz--;

            if(head==tail){
                delete deletedNode;
                head=NULL;
                tail=NULL;
                return;
            }
            tail=tail->prev;
            delete deletedNode;
            tail->next=NULL;
        }

        int top(){
            return tail->val;
        }

        int size(){
            
            return sz;
            
        }

        bool empty(){
            return head==NULL;
            // if(head==NULL)
            //     return true;
            // else
            //     return false;
        }

};

int main() {
    MyStack st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    

    return 0;
}