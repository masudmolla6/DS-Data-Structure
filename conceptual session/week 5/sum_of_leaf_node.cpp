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


int sum_of_leaf_node(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    int sum=0;
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();

        if(p->left==NULL && p->right==NULL) sum+=p->val;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);

    }

    return sum;
}

int main() {
    Node* root=input_binary_tree();

    int sum=sum_of_leaf_node(root);

    cout << sum << endl;
    
    return 0;
}