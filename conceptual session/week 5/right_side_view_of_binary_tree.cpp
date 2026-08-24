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

vector<int> rightSideView(Node* root){
    vector<int> result;

    if(!root) return result;

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int size=q.size(); // এই level এ মোট কতগুলো node আছে

        for (int i = 0; i < size; i++)
        {
            Node* node=q.front();
            q.pop();

            // level এর শেষ node হলেই সেটা right view তে যাবে
            if(i==size-1){
                result.push_back(node->val);
            }

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        

    }
    return result;

}




int main() {
    Node* root=input_binary_tree();

    vector<int> rightView = rightSideView(root);

    cout << "Right Side View: ";
    for(int x : rightView){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}