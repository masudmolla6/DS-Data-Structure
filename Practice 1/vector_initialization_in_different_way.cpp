#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v;
    // vector<int> v(5);
    // vector<int> v(4, 3);

    
    // vector<int> v={2,3,4,6};
    // vector<int> v2(v);

    int a[4]={4, 7, 8, 6};
    vector<int> v2(a, a+4);



    // cout << v2.size() << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}