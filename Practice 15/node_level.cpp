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
    Node* root=NULL;
    if(val!=-1) root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        // queue thake front node ber kore ana.
        Node* p=q.front();
        q.pop();

        // oi node niye Kaj kora 
        int l,r;
        cin >> l >> r;
        Node* myLeft=NULL;
        Node* myRight=NULL;

        if(l!=-1) myLeft=new Node(l);
        if(r!=-1) myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        // oi node er child queue te insert kora 
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int node_level(Node* root, int searchedValue){
    queue<pair<Node*, int>> q;
    if(root!=NULL) q.push({root, 1});

    while (!q.empty())
    {
        pair<Node*, int> p=q.front();
        q.pop();

        Node* node=p.first;
        int level=p.second;

        if(node->val==searchedValue) return level;

        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
    return -1;
}

int main() {
    Node* root=input_binary_tree();
    int searchedValue;
    cin >> searchedValue;
    int result=node_level(root, searchedValue);
    if(result==-1) cout << "Not Found" << endl;
    else cout << "Node Found In Level : " << result << endl;
    return 0;
}
