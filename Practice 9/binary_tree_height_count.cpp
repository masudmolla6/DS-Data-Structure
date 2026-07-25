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

    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // queue thake first node ber kore ana.
        Node* p=q.front();
        q.pop();

        // Then Parent node nigye kaj kora.
        int l,r;
        cin >> l >> r;
        Node* myLeft=NULL;
        Node* myRight=NULL;


        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        // Then parent node er left and right node ke queue te push kora.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }

    return root;

    
}

// void binary_tree_print(Node* root){
//     queue<Node*> q;
//     if(root) q.push(root);

//     while (!q.empty())
//     {
//         // queue thake first node ber kore ana.
//         Node* p=q.front();
//         q.pop();

//         // Then Parent node nigye kaj kora.
//         cout << p->val << " ";

//         // Then parent node er left and right node ke queue te push kora.
//         if(p->left) q.push(p->left);
//         if(p->right) q.push(p->right);
//     }
// }

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



int main() {
    Node* root=binary_tree_input();
    int result=mx_height(root);
    cout << result << endl;
    return 0;
}