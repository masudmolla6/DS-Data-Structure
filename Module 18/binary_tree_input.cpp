#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;

    Node* root;
    if(val==-1){
        root=NULL;
    }
    else{
        root=new Node(val);
    }

    queue<Node*> q;

    if(root){
        q.push(root);
    }

    while (!q.empty())
    {
        //1- ber kore ana.
        Node* p= q.front();
        q.pop();
         
        // 2- oi node niye kaj kora
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if(l==-1){
            myLeft=NULL;
        }
        else{
            myLeft=new Node(l);
        }

        if(r==-1){
            myRight=NULL;
        }
        else{
            myRight=new Node(r);
        }

        p->left=myLeft;
        p->right=myRight;


        // 3- children push kora.
        if(p->left){
            q.push(p->left);
        }
        
        if(p->right){
            q.push(p->right);
        }


    }
    
    return root;

}

void laveorder(Node* root){
    if(root==NULL){
        cout << "No Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // ber kore ana.
        Node* f=q.front();
        q.pop();

        // oi node ke niye kaj kora.
        cout << f->val << " ";

        // children push kora.
        if(f->left)
            q.push(f->left);
        
        if(f->right)
            q.push(f->right);
    }
    

}

int main() {
    Node* root=input_tree();

    laveorder(root);
    return 0;
}