#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={2,3,4,56,78};
    vector<int> v2=v;
    // vector<int> v2;
    // v2.assign(v.begin(), v.end());

    // v2.push_back(30);
    // v2.pop_back();

    // v.erase(v.begin());
    // v.erase(v.begin()+1);
    // v.erase(v.begin(), v.begin()+3);

    // replace(v.begin(), v.end(), 56, 100);

    auto it=find(v.begin(), v.end(), 4);

    if(it!=v.end()){
        cout << "Found The Value" << endl;
    }
    else{
        cout << "Not Found The Value" << endl;
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    
    return 0;
}