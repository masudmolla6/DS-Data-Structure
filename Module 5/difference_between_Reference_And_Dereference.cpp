#include <bits/stdc++.h>
using namespace std;

int main() {
    // int x=10;
    // int* y=&x;
    // *y=20;
    // cout << *y << endl;

    int x = 10;
    int &y = x;
    y = 20;

    cout << &y << endl;
    cout << &x << endl;
    return 0;
}