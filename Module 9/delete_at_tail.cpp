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
    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}

void delete_at_tail(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }

    Node* deleteddNode=tail;

    if(head==tail){
        head=NULL;
        tail=NULL;
    }
    else{
        tail=tail->pre;
        tail->next=NULL;
    }

    delete deleteddNode;

}

void print_linked_list(Node* temp){
    if(temp==NULL){
        return;
    }
    cout << temp->val << " ";
    print_linked_list(temp->next);
}

int main() {
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }

    delete_at_tail(head, tail);
    print_linked_list(head);

    
    return 0;
}