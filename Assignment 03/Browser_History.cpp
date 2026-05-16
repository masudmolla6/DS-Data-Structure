#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string>addresses;
    string address;
    while (cin >> address && address!="end")
    {
        addresses.push_back(address);
    }

    int q;
    cin >> q;

    auto currentLocation=addresses.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;
        
        if(cmd=="visit"){
            string locationName;
            cin >> locationName;

            auto findLocation=find(addresses.begin(), addresses.end(), locationName);

            if(findLocation!=addresses.end()){
                cout << *findLocation << endl;
                currentLocation=findLocation;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(cmd=="next"){
            auto nextLocation=next(currentLocation);

            if(nextLocation!=addresses.end()){
                cout << *nextLocation << endl;
                currentLocation=nextLocation;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(cmd=="prev"){
            auto previousLocation=prev(currentLocation);

            if(currentLocation!=addresses.begin()){
                cout << *previousLocation << endl;
                currentLocation=previousLocation;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
    }
    
    
    return 0;
}