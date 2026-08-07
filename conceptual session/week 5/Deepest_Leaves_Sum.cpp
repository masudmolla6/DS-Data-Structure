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
        // queue thake first Node ber kore ana.
        Node* p=q.front();
        q.pop();

        // oi node niye kaj kora(mane parent node er left and right add kora);
        int l,r;
        cin >> l >> r;

        Node* myLeft=NULL;
        Node* myRight=NULL;

        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        // parent mode er left & right queue te push kora.

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

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

    int leftCount=mx_height(root->left);
    int rightCount=mx_height(root->right);

    return max(leftCount,rightCount)+1;  
}


int deepest_leaves_sum(Node* root){

    queue<pair<Node*, int>> q;
    if(root) q.push({root, 1});

    int sum=0;
    int mxHeight=mx_height(root);

    while (!q.empty())
    {
        pair<Node*, int> parent=q.front();
        q.pop();

        Node* node=parent.first;
        int level=parent.second;

        if(level==mxHeight){
            sum+=node->val;
        }


        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});

    }

    return sum;
    
}

int main() {
    Node* root=input_binary_tree();

    int sum=deepest_leaves_sum(root);

    cout << sum << endl;
    
    return 0;
}