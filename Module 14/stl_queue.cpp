#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> qe;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        qe.push(val);
    }

    if(!qe.empty())
        cout << qe.front() << endl;

    if(!qe.empty())
        qe.pop();


    while (!qe.empty())
    {
        cout << qe.front() << " ";
        qe.pop();
    }
    
    return 0;
}