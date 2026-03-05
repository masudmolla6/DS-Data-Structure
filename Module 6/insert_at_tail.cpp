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

void insert_at_tail(Node* &head, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    Node* temp=head;

    // while (temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }

    for (;temp->next!=NULL; temp=temp->next)
    {
        
    }

    // cout << temp->val << endl;
    
    temp->next=newNode;

    
}

void print_linked_list(Node* head){

    for (Node* i = head; i != NULL ; i=i->next)
    {
        cout << i->val << " ";
    }
}

int main() {
    Node* head=NULL;

    // Node* head=new Node(10);
    // Node* a=new Node(20);
    // Node* b=new Node(30);
    // Node* c=new Node(40);
    // Node* d=new Node(50);

    // head->next=a;
    // a->next=b;
    // b->next=c;
    // c->next=d;

    insert_at_tail(head, 200);
    print_linked_list(head);
    return 0;
}