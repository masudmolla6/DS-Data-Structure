#include <bits/stdc++.h>
using namespace std;

void fun(int* &ptr){
    int y=200;
    // cout << "Fun Function ptr Variable Address->" << ptr << endl;
    ptr=&y;
    cout << "Fun Function ptr Variable Address->" << ptr << endl;
    // cout << "Fun Function ptr Variable Address->" <<&ptr << endl;
    // cout << "Fun Function ptr Variable value->" << *ptr << endl;

}

int main() {
    int x=10;
    // cout << "X Variable Address ->" << &x << endl;
    int* p=&x;

    // cout << "Main Function P Variable Address->" << *p << endl;
    cout << "Main Function P Variable Address->" << p << endl;
    // cout << "Main Function P Variable Address->" << p << endl;
    // cout << "Main Function P Variable value->" << *p << endl;
        
    fun(p);

    cout << "Main Function P Variable Address->" << p << endl;

    return 0;
}
