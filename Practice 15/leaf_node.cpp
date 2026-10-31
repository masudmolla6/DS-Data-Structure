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

vector<int> get_leafs(Node* root){

    vector<int> leafs;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        if(p->left == NULL && p->right == NULL){
            leafs.push_back(p->val);
        }

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return leafs;

}

int main() {
    Node* root=tree_input();
    vector<int> leafs=get_leafs(root);

    sort(leafs.begin(), leafs.end(), greater<int>());

    for(int v : leafs){
        cout << v << " ";
    }

    return 0;
}