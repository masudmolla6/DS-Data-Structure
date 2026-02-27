#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={12,3,4,60,50};
    // vector<int> v2;
    // v2=v;
    // v2.assign(v.begin(), v.end());
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // v2.push_back(34);
    // v2.pop_back();

    vector<int> v3={23,45,87};

    // v.insert(v.begin()+2,v3.begin(), v3.end());
    // v.insert(v.begin()+2, 100);


    // v.erase(v.begin()+1);
    // v.erase(v.begin()+1, v.end()-1);
    v.erase(v.begin()+1, v.begin()+4);

    for (int x : v)
    {
        cout << x << " ";
    }
    
    
    return 0;
}