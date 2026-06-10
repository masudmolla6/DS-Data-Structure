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

Node* binary_input(){
    int val;
    cin >> val;

    Node* root;

    if(val==-1) 
        root=NULL;
    else
         root=new Node(val);

    queue<Node*> q;

    if(root)
        q.push(root);

    while (!q.empty())
    {
        // 1-Node ber kore ana.
        Node* p=q.front();
        q.pop();

        // Oi Node Niye Kaj.
        int l,r;
        cin >> l >> r;

        Node* myLeft = NULL;
        Node* myRight = NULL;

        if (l != -1)
            myLeft = new Node(l);

        if (r != -1)
            myRight = new Node(r);

        // if(l==-1) myLeft=NULL;
        // else myLeft=new Node(l);

        // if(r==-1) myRight=NULL;
        // else myRight=new Node(r);


        p->left=myLeft;
        p->right=myRight;

        // Parent Node er Children Push Kora.

        if(p->left) q.push(p->left);

        if(p->right) q.push(p->right);
    }
    return root;
}

void print_binary_tree(Node* root){

    if(root==NULL){
        cout << "Empty Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // Node Ber Kore ana.
        Node* p=q.front();
        q.pop();

        // Oi Node Niye Kaj Kora.
        cout << p->val << " ";

        // Parent Node er Children Push Kora .

        if(p->left) q.push(p->left);

        if(p->right) q.push(p->right);


    }
    
}

int main() {
    Node* root=binary_input();
    print_binary_tree(root);
    return 0;
}