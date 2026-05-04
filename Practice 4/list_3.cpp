#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> list1={2,3,4,5, 34,45,67, 56,34,93};
    // list1.erase(next(list1.begin(), 3));

    list1.erase(next(list1.begin(), 3), next(list1.begin(), 6));


    for (int val:list1)
    {
        cout << val << " ";
    }

    return 0;
}