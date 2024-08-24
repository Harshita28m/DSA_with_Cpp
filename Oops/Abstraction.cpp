#include <bits/stdc++.h>

using namespace std;
class Player{
    private:
    int score;  //abstraction achived with the help of private keyword
    public:
    int health;
    };
int main(){
    
    Player amit;
    amit.score = 10;
    amit.health=100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    Player harsh;
    harsh.score=15;
    harsh.health=120;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;

    return 0;
 }