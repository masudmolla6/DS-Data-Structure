#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    int n;
    cin >> n;
    while (cin >> n && n!=-1)
    {
        l.push_back(n);
    }

    l.sort();
    l.unique();

    for (int val : l)
    {
        cout << val << " ";
    }
    
    return 0;
}