#include <bits/stdc++.h>
using namespace std;

int main() {
    // O(1)-> Constant Complexity
    int n;
    cin >> n;

    // O(N) Linear Complexity

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << endl;
    // }

    // O(logN) Logarithmic complexity
    for (int i = n; i > n ; i/=2)
    {
        cout << i << endl;
    }

    
    
    return 0;
}