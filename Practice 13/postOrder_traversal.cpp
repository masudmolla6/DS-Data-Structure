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

Node* input_binary_tree(){
    int val;
    cin >> val;
    Node* root=NULL;
    if(val-1) root=new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // Node ber kore ana.
        Node* p=q.front();
        q.pop();

        // oi node niye kaj kora.
        int l,r;
        cin >> l >> r;
        Node* myLeft=NULL;
        Node* myRight=NULL;

        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        // parent node er chil set kora.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void postOrder_traversal(Node* root){
    if(root==NULL) return;

    postOrder_traversal(root->left);
    postOrder_traversal(root->right);
    cout << root->val << " ";
}

int main() {
    
    Node* root=input_binary_tree();
    postOrder_traversal(root);

    return 0;
}