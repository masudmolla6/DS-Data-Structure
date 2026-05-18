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

class MyQueue{
    public:
        Node* head=NULL;
        Node* tail=NULL;

        int sz=0;

        void push(int val){
            sz++;
            Node* newNode=new Node(val);

            if(head==NULL){
                head=newNode;
                tail=newNode;
                return;
            }
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }

        void pop(){
            if(head==NULL){
                return;
            }

            sz--;
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
            return sz;
        }

        bool empty(){
            return head==NULL;
        }

        int back(){
            // if(head==NULL){
            //     return;
            // }

            return tail->val;
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

    if(!qe.empty())
        cout<<qe.front()<<endl;


    while (!qe.empty())
    {
        cout << qe.front() << " ";
        qe.pop();
    }


    cout << qe.front() << " " << qe.back() << " " << qe.size() << endl;
    
    
    
    return 0;
}