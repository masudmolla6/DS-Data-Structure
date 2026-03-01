#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    for (auto it=v.begin(); it < v.end(); it++)
    {
        cin >> *it;
    }

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    
    
    return 0;
}