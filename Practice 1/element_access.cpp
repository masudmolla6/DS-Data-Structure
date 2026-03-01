#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &x : v)
    {
        cin >> x;
    }

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // cout << v[3] << endl;
    // cout << v.at(2) << endl;
    // cout << v.front() << endl;
    cout << v.back() << endl;
    
    return 0;
}