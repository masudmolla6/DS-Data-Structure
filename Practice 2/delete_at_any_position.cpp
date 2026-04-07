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

    void delete_at_head(Node* &head, Node* &tail){
        // if(head==NULL){
        //     return;
        // }

        // if(head->next==NULL){
        //     delete head;
        //     head=NULL;
        //     tail=NULL;
        //     return;
        // }

        // Node* deletedNode=head;
        // head=head->next;
        // delete deletedNode;

        if(head==NULL) return;

        Node* deletedNode = head;
        head = head->next;

        if(head == NULL)  // head NULL হলে মানে list খালি, tail-ও NULL করো
            tail = NULL;

        delete deletedNode;

    }


    void delete_at_tail(Node* &head, Node* &tail){

        if(head==NULL)
            return;

        if(head->next==NULL){
            delete head;
            head=NULL;
            tail=NULL;
            return;
        }

        Node* temp=head;
        
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        // cout << temp->val << endl;

        Node* deletedNode=tail;
        temp->next=NULL;
        tail=temp;
        delete deletedNode;
    }

void delete_at_any_position(Node* &head, Node* &tail, int idx){
    if(head==NULL){
        return;
    }
    int size=siz_of_linked_list(head);

    if(idx<0 ||size<=idx){
        cout << "invalid Index" << endl;
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
        temp->next=temp->next->next;
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

    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }

    delete_at_any_position(head, tail, -5);
    print_linked_list(head);
    
    return 0;
}