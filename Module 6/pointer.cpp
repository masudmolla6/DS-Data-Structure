#include <bits/stdc++.h>
using namespace std;

void fun(int* ptr){
// ptr holo akta pointer variable ja hold kore rakhase main function thake argument hisabe patano {fun(p)} p variable er value (akhan a p variable value mane x variable er address);

    cout << ptr << endl;
}

int main() {
    int x=10;  //x akti variable jar value 10;
    int* p=&x;


    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    //p akta pointar variable jar value hocche x variable er Adderss (&x);
    // *p holo je variable er address hold kore rakhse oi variable er value(x variable er value -> *p dereference kore);
    // &p holo p pointer variable er address.

    fun(p);
    cout << p << endl;
    return 0;
}