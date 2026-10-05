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

int mx_height(Node* root){
    if(root==NULL){
        return 0;
    }

    if(root->left==NULL && root->right==NULL){
        return 0;
    }

    int l=mx_height(root->left);
    int r=mx_height(root->right);

    return max(l, r)+1;
}


int main() {
    Node* root=tree_input();
    int max_height=mx_height(root);

    if(max_height==0){
        cout << "NO Tree" << endl;
    }
    else{
        cout << max_height << endl;
    }

    return 0;
}
