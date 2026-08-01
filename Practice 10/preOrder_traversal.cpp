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
    Node* root;

    if(val==-1) root=NULL;
    else root=new Node(val);

    queue<Node*> q;

    if(root) q.push(root);

    while (!q.empty())
    {
        // queue thake pareent node ber kore ana
        Node* p=q.front();
        q.pop();

        // oi node niye kaj kora mane parent node er left and right child create kora.
        int l,r;
        cin >> l >> r;

        Node* myLeft=NULL;
        Node* myRight=NULL;

        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        // parent node er left & right child define kora.
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    
    return root;
}

void preorder_traversal(Node* root){
    if(root==NULL) return;

    cout << root->val << " ";

    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

int main() {
    Node* root=input_binary_tree();
    preorder_traversal(root);                              
    return 0;
}