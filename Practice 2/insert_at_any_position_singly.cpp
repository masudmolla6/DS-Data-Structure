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

int siz_of_linked_list(Node* temp){
    int count=0;

    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    return count;

}

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

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

    tail->next=newNode;
    tail=newNode;
}

void insert_at_any_position(Node* &head, Node* &tail, int val, int idx){
    int size=siz_of_linked_list(head);

    if(idx<0 ||size<idx){
        cout << "invalid Index" << endl;
        return;
    }
    else if(idx==0){
        insert_at_head(head, tail, val);
    }
    else if(size==idx){
        insert_at_tail(head, tail, val);
    }
    else{
        Node* newNode=new Node(val);
        Node* temp=head;

        for (int i = 1; i < idx; i++)
        {
            temp=temp->next;
        }

        Node* nextNode=temp->next;
        temp->next=newNode;
        newNode->next=nextNode;

    }

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

    insert_at_any_position(head, tail, 34, 5);
    print_linked_list(head);
    
    return 0;
}