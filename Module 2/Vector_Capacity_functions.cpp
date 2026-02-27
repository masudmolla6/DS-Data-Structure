#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v;
    // cout << v.max_size() << endl;

    // vector<int> v;
    // cout << v.capacity() << endl;
    // v.push_back(5);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[0] << endl;
    // cout << v[1] << endl;


    // if(v.empty()){
    //     cout << "Empty" << endl;
    // }
    // else{
    //     cout << "Not Empty" << endl;
    // }

    v.resize(7, 56);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}