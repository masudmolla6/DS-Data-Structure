#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,  int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }


    tail->next=newNode;
    tail=newNode;
}

void print_linked_list(Node* head){
    for (Node* i = head; i != NULL; i=i->next)
    {
        cout << i->val << endl;
    }
}

int main() {
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->next=tail;

    insert_at_tail(head, tail, 200);
    print_linked_list(head);


    return 0;
}