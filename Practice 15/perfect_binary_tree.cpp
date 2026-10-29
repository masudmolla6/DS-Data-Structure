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

Node* binary_tree_input(){
    int val;
    cin >> val;
    Node* root=NULL;
    if(val!=-1) root=new Node(val);

    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
        // queue the first node ber kore ana 
        Node* p=q.front();
        q.pop();

        // oi node niye kaj kora
        int l,r;
        cin >> l >> r;
        Node* myLeft=NULL;
        Node* myRight=NULL;

        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        // oi node er left and right queue te push kora
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}


int mx_height(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 0;
    int leftEdgeCount=mx_height(root->left);
    int rightEdgeCount=mx_height(root->right);
    return max(leftEdgeCount, rightEdgeCount)+1;
}

int node_count(Node* root){
    if(root==NULL) return 0;

    int leftNodeCount=node_count(root->left);
    int rightNodeCount=node_count(root->right);

    return (leftNodeCount+rightNodeCount+1);
}


bool is_perfect(Node* root){
    if(root==NULL) return false;

    int h=mx_height(root);
    int node=node_count(root);

    int expected_node=pow(2,h+1)-1;

    return node==expected_node;
}

int main() {
    Node* root=binary_tree_input();

    if(is_perfect(root)) cout << "Perfect Binary Tree" << endl;
    else cout << "Not Perfect Binary Tree" << endl;

    return 0;
}