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

Node* convert(vector<int> &v, int l, int r){
    if(l>r) return NULL;
    int mid=(r+l)/2;
    Node* root=new Node(v[mid]);

    Node* leftRoot=convert(v, l, mid-1);
    Node* rightRoot=convert(v, mid+1, r);

    root->left=leftRoot;
    root->right=rightRoot;
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
    return root;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    Node* root=convert(v, 0, n-1);
    binary_tree_print(root);
    
    return 0;
}