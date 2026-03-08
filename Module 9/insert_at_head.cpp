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

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    
    newNode->next=head;
    head->pre=newNode;
    head=newNode;

}

void print_linked_list(Node* temp){
    if(temp==NULL){
        return;
    }

    cout << temp->val << " ";
    print_linked_list(temp->next);

}

int main() {
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->pre=head;
    a->next=tail;
    tail->pre=a;

    insert_at_head(head, tail, 100);
    insert_at_head(head, tail, 200);
    insert_at_head(head, tail, 300);
    print_linked_list(head);
    
    return 0;
}