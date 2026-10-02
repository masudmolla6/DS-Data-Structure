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

Node* tree_input(){
    int val;
    cin >> val;
    Node* root=NULL;

    if(val!=-1) root=new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        //node ber kore ana
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

        // oi node er left and right add kora.
        if(p->left) q.push(p->left);
        if(p ->right) q.push(p->right);
    }
    return root;
}

int count_leaf(Node* root){
    if(root==NULL) return 0;

    if(root->left==NULL && root->right==NULL){
        return 1;
    }

    int l=count_leaf(root->left);
    int r=count_leaf(root->right);
    return l+r;
}

int main() {
    Node* root=tree_input();
    int leaf=count_leaf(root);
    if(root==NULL){
        cout << "Empty Tree" << endl;
    }else{
        cout << leaf << endl;
    }
    return 0;
}