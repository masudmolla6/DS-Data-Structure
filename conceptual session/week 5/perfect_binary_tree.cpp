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
        // queue thake node ber kore ana.
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


        // parent node er left & right queue te push kora.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    }

    return root;
    
}

int count_node(Node* root){
    if(root==NULL) return 0;

    int left_node_count=count_node(root->left);
    int right_node_count=count_node(root->right);

    return left_node_count+right_node_count+1;
};

int height_of_binary_tree(Node* root){
    if(root==NULL) return 0;

    if(root->left==NULL && root->right==NULL) return 0;

    int left_side_height=height_of_binary_tree(root->left);
    int right_side_height=height_of_binary_tree(root->right);

    return max(left_side_height, right_side_height) + 1;
}

bool is_perfect(Node* root){
    int h=height_of_binary_tree(root);
    int node=count_node(root);

    int expected_node=pow(2, h+1) -1;

    return node==expected_node;
}


int main() {
    Node* root=input_binary_tree();

    if(is_perfect(root)) cout << "Perfect Binary Tree" << endl;
    else cout << "Not Perfect Binary Tree" << endl;

    return 0;
}