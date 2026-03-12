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
    head->pre=newNode;
    newNode->next=head;
    head=newNode;
}

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

int linked_list_size(Node* temp){
    int count=0;

    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insert_at_any_position(Node* &head, Node* &tail, int idx, int val){
    Node* newNode=new Node(val);
    int listSize=linked_list_size(head);
    
    if(idx==0){
        insert_at_head(head, tail, val);
    }
    else if(listSize==idx){
        insert_at_tail(head, tail, val);
    }
    else{
        Node* temp=head;
        for (int i = 1; i < idx; i++)
        {
            temp=temp->next;
        }
        // cout << temp->val << endl;

        Node* nextNode=temp->next;

        newNode->pre=temp;
        temp->next=newNode;
        newNode->next=nextNode;

        if(nextNode!=NULL){
            nextNode->pre=newNode;
        }
        else{
            tail=newNode;
        }

    }
}

void print_linked_list(Node* temp){
    if(temp==NULL){
        return;
    }
    cout << temp->val << "  ";
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
    insert_at_any_position(head, tail, 3, 500);
    print_linked_list(head);
    return 0;
}