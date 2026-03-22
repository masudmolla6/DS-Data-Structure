#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l={10,6,73,11,89,12,6,67,89};
    // l.remove(2);
    // l.sort();
    // l.sort(greater<int>());

    // l.unique();

    l.reverse();

    for(int val : l){
        cout << val << " ";
    }
    return 0;
}