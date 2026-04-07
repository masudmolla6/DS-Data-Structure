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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    tail=newNode;
}

void delete_at_tail(Node* &head, Node* &tail){
    if(head==NULL)
        return;

    if(head->next==NULL)
        tail=NULL;


    Node* temp=head;
    
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    // cout << temp->val << endl;

    Node* deletedNode=tail;
    temp->next=NULL;
    tail=temp->next;
    delete deletedNode;
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