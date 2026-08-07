#include <bits/stdc++.h>
using namespace std;

int main() {
    // Normal stl pair
    pair<string, int> p;
    // p=make_pair("Masud Rana", 34);
    p={"Hello", 10};
    // cout << p.first << " " <<  p.second << endl;

    // Pair Of Vector 
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    

    return 0;
}