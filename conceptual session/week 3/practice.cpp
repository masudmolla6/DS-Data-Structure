#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string>playList;
    string song;
    while (cin >> song && song!="stop")
    {
        playList.push_back(song);
    }

    int q;
    cin >> q;

    auto currentSong=playList.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;
        
        if(cmd=="play"){
            string songName;
            cin >> songName;

            auto findSong=find(playList.begin(), playList.end(), songName);

            if(findSong!=playList.end()){
                cout << "playing " << *findSong << endl;
                currentSong=findSong;
            }
            else{
                cout << "Not Found" << endl;
            }
        }
        else if(cmd=="right"){
            auto nextSong=next(currentSong);

            if(nextSong!=playList.end()){
                cout << "playing " << *nextSong << endl;
                currentSong=nextSong;
            }
            else{
                cout << "Not Found" << endl;
            }
        }
        else if(cmd=="left"){
            auto previousSong=prev(currentSong);

            if(currentSong!=playList.begin()){
                cout << "playing " << *previousSong << endl;
                currentSong=previousSong;
            }
            else{
                cout << "Not Found" << endl;
            }
        }
    }
    
    
    return 0;
}