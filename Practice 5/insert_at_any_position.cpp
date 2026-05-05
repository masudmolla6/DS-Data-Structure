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

int linked_list_size(Node* temp){

    int count=0;
    
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insert_at_head(Node* &head, Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}

void insert_at_any_position(Node* &head, Node* &tail, int val, int idx){
    if(head==NULL)return;

    int size=linked_list_size(head);

    if(idx==0){
        insert_at_head(head, tail, val);
    }
    else if(idx==size){
        insert_at_tail(head, tail, val);
    }
    else{
        Node* newNode=new Node(val);
        for (Node i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
}

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

void print_linked_list(Node* temp){
    if(temp==NULL)return;

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

    insert_at_head(head, tail, 100);
    print_linked_list(head);
    return 0;
}