#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    // for (int i=0; i < v.size() ; i++)
    // {
    //     cin >> v[i];
    // }

    // for (int &x : v)
    // {
    //     cin >> x;
    // }

    // for (int x:v)
    // {
    //     cout << x << " ";
    // }

    // cout << v.max_size() << endl;
    // cout << v.capacity() << endl;


    // v.clear();
    // v.resize(10);

    // cout << v.size() << endl;


    if(v.empty()==true){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }
    
    return 0;
}