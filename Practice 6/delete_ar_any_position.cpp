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

int linked_list_size(Node* temp){
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next; 
    }
    return count;

     
 }
 
void delete_at_head(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }

    if(head==tail){
        delete head;

        head=NULL;
        tail==NULL;
        return;
    }

    Node* deletedNode=head;

    head=head->next;
    head->pre=NULL;

    delete deletedNode;

}  

void delete_at_tail(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }

    if(head==tail){
        delete head;

        head=NULL;
        tail==NULL;
        return;
    }

    Node* deletedNode=tail;

    tail=tail->pre;
    tail->next=NULL;

    delete deletedNode;

}

void delete_at_any_position(Node* &head, Node* &tail, int idx){
    if(head==NULL){
        return;
    }

    int size=linked_list_size(head);

    if(idx<0 || idx >= size){
        cout << "Invalid Index" << endl;
        return;
    }
    else if(idx==0){
        delete_at_head(head, tail);
    }
    else if(idx==size-1){
        delete_at_tail(head, tail);
    }
    else{
        Node* temp=head;

        for (int i = 0; i < idx-1; i++)
        {
            temp=temp->next;
        }
        // cout << temp->val << endl;
        Node* deletedNode=temp->next;
        Node* nextNode=temp->next->next;

        temp->next=nextNode;
        nextNode->pre=temp;

        delete deletedNode;
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
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    delete_at_any_position(head, tail, 3);
    print_linked_list(head);

    
    return 0;
}