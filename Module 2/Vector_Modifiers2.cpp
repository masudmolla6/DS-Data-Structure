#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={34, 67, 23, 78, 67, 3, 4, 7, 67, 67};
    // replace(v.begin(), v.end(), 67, 1000);
    // replace(v.begin(), v.end()-1, 67, 1000);
    // for (int x:v)
    // {
    //     cout << x << " ";
    // }

    auto it=find(v.begin(), v.end(), 34);

    // cout << (it!=v.end() ? "Found" : "Not Found") << endl;
    cout << *it << endl;
    
    return 0;
}