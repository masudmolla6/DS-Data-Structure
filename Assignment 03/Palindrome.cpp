#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* pre;
        Node* next;

    Node(int val){
        this->val=val;
        this->pre=NULL;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->pre=tail;
    tail->next=newNode;
    tail=newNode;
}

int palindrome_or_not(Node* head, Node* tail){
    int flag=1;
    for (Node *i = head, *j=tail; i != j && i->pre != j; i=i->next, j=j->pre)
    {
        if(i->val!=j->val){
            flag=0;
            break;
        }
    }

    return flag;
    
}

int main() {
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }

    int result=palindrome_or_not(head, tail);

    if(result==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}