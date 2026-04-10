#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>list1={10, 20, 30, 40, 50, 60};
    list<int>list2;
    // list2=list1;

    list2.assign(list1.begin(), list1.end());

    // list2.push_front(100);
    // list2.push_back(200);

    // list2.pop_front();
    // list2.pop_back();

    // list<int> list3={89,56,23,78,90};

    // list2.insert(next(list2.begin(), 2), 500);
    // list2.insert(next(list2.begin(), 2), list3.begin(), list3.end());
    // cout << *next(list2.begin(), 2) << endl;
    
    
    // list2.erase(next(list2.begin(), 2));
    // list2.erase(next(list2.begin(), 1), next(list2.begin(), 4));

    // replace(list2.begin(), list2.end(), 20, 35);


    // for (auto it = list2.begin(); it != list2.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    auto it=find(list2.begin(), list2.end(), 300);

    // if(it==list2.end()){
    //     cout << "Not Found" << endl;
    // }
    // else{
    //     cout << "Found" << endl;
    // }

    for(int val : list2){
        cout << val << endl;
    }
    return 0;
}