#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* prev;
        Node* next;

    Node(int val){
        this->val=val;
        this->prev=NULL;
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

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
}

void insert_at_middle(Node* &head, Node* &tail, int idx, int val){
        Node* temp=head;

        for (int i = 0; i < idx-1; i++)
        {
            temp=temp->next;   
        }

        // cout << temp->val << endl;

        Node* newNode=new Node(val);

        Node* nextNode=temp->next;

        newNode->prev=temp;
        temp->next=newNode;
        newNode->next=nextNode;

        if(nextNode!=NULL){
            nextNode->prev=newNode;
        }
}

void print_left_to_right(Node* temp){
    cout<<"L -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_right_to_left(Node* temp){
    cout<<"R -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head=NULL;
    Node* tail=NULL;

    int q;

    cin >> q;

    while (q--)
    {
        int x,v;
        cin >> x >> v;

        int size=linked_list_size(head);

        if(x<0 || x>size){
            cout << "Invalid" << endl;
        }
        else if(x==0){
            insert_at_head(head, tail, v);
            print_left_to_right(head);
            print_right_to_left(tail);


        }
        else if(x==size){
            insert_at_tail(head, tail, v);
            print_left_to_right(head);

            print_right_to_left(tail);
        }
        else{
            insert_at_middle(head, tail, x, v);
            print_left_to_right(head);
            print_right_to_left(tail);
        }
    }

    return 0;
}