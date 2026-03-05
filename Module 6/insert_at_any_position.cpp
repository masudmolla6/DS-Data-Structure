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

void insert_at_any_position(Node* &head, int idx, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    Node* temp=head;

    for (int i = 0; i < idx-1; i++)
    {
        temp=temp->next;
    }
    
    // cout << temp->val << endl;

    newNode->next=temp->next;
    temp->next=newNode;


}

void print_linked_list(Node* head){

    for (Node* i = head; i != NULL ; i=i->next)
    {
        cout << i->val << " ";
    }
}

int main() {
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    insert_at_any_position(head, 3, 200);
    print_linked_list(head);
    return 0;
}