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

void print_linked_list(Node* temp){
    if(temp==NULL){
        return;
    }
    
    cout << temp->val << endl;

    print_linked_list(temp->next);
}


int main() {
    Node* head=NULL;
    Node* tail=NULL;

    int val;
     while (cin >> val)
     {
        if(val==-1){
            break;
        }
        insert_at_tail(head, tail, val);
     }
     
     print_linked_list(head);
     

    return 0;
}
