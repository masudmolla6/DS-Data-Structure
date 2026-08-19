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

int height_of_binary_tree(Node* root){
    if(root==NULL) return 0;

    if(root->left==NULL && root->right==NULL) return 0;

    int l=height_of_binary_tree(root->left);
    int r=height_of_binary_tree(root->right);
    return max(l,r)+1;
}

int count_nodes(Node* root){
    if(root == NULL) return 0;

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1;
}

bool is_perfect(Node* root){

    int h = height_of_binary_tree(root);
    int nodes = count_nodes(root);

    int expected_nodes = pow(2, h + 1) - 1;

    return nodes == expected_nodes;
}

int main() { 
    Node* root = input_binary_tree();

    if(is_perfect(root))
        cout << "Perfect Binary Tree";
    else
        cout << "Not Perfect Binary Tree";

    return 0;
}