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
    // for (int i = 1; i < n; i*=2)
    // {
    //     cout << i << endl;
    // }
    // for (int i = n; i >= 1; i/=2)
    // {
    //     cout << i << endl;
    // }

    // O(N*N)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "Hello World" << endl;
    //     }
        
    // }

    // O(sqrt(N))

    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if(n%i==0){
    //         cout << i << " " << n/i << endl;
    //     }
    //     else{
    //         cout << i << endl;
    //     }
    // }
    // for (int i = 1; i*i <= n; i++)
    // {
    //     if(n%i==0){
    //         cout << i << " " << n/i << endl;
    //     }
    //     else{
    //         cout << i << endl;
    //     }
    // }
    

    // O(NlogN)
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j*=2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    

    
    
    return 0;
}