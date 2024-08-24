#include <bits/stdc++.h>

using namespace std;
class Player{
    private:
    int score=10;  //not recommended to do initialization in private
    int health=5;

    public:
    void show(){
        cout<<score<<endl;
    }
    };

 

int main(){
    
    Player amit;
    // amit.score = 10;
    // amit.health=100;
    // cout<<amit.score<<endl;
    // cout<<amit.health<<endl;
    amit.show();

    Player harsh;
    // harsh.score=15;
    // harsh.health=120;
    // cout<<harsh.score<<endl;
    // cout<<harsh.health<<endl;

    return 0;
 }