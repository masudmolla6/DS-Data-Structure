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
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

void delete_at_any_position(Node* &head, Node* &tail, int idx){
    if(head==NULL){
        return;
    }

    Node* temp=head;
    for (int i = 0; i < idx-1; i++)
    {
        temp=temp->next;
    }

    // cout << temp->val << endl;

    Node* deletedNode=temp->next;
    temp->next=temp->next->next;

    if(deletedNode==tail){
        tail=temp;
    }

    delete deletedNode;

}


void print_linked_list(Node* head){
    while (head!=NULL)
    {
        cout << head->val << " ";
        head=head->next;
    }
    
}

int main() {

    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }

    int idx;
    cin >> idx;

    delete_at_any_position(head, tail, idx);
    print_linked_list(head);
    
    return 0;
}