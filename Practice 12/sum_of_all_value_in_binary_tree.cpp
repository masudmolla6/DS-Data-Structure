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
        Node* p=q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft=NULL;
        Node* myRight=NULL;

        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int sumOfAllNodes(Node* root){
    if(root==NULL) return 0;
    

    int leftSum=sumOfAllNodes(root->left);
    int rightSum=sumOfAllNodes(root->right);

    return root->val+leftSum+rightSum;
}

int main() {
    Node* root=input_binary_tree();
    int result=sumOfAllNodes(root);

    cout << result << endl;

    return 0;
}