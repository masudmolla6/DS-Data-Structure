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
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // queue theke first node ber kore ana.
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

        // oi node er chldren queue te push kora.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}


Node* binary_tree_print(Node* root){
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // queue theke first node ber kore ana.
        Node* p=q.front();
        q.pop();

        // oi node niye kaj kora.
        cout << p->val << " ";

        // oi node er chldren queue te push kora.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

bool search(Node* root, int val){
    if(root==NULL) return false;
    if(root->val == val) return true;
    if(root->val > val)
        return search(root->left, val);
    else{
        return search(root->right, val);
    }
}

int main() {
    Node* root=binary_tree_input();
    int val;
    cin >> val;
    if(search(root, val))
        cout << "found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}
