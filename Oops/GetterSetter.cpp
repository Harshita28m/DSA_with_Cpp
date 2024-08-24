#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int health;
    int score;
    public:
    void setScore(int s){
       cout<<"setter"<<endl;    // with the help of this statement we can track that whether any user is trying to manipulate the private variables with the help of public methods
        score = s;
    }
    int getScore(){
        return score;
    }

    void setHealth(int h){
        health = h;
    }
    int getHealth(){
        return health;
    }
};
 
int main(){
    Student amit;
    amit.setScore(10);
    amit.setHealth(100);
    cout<<amit.getScore()<<endl;
    cout<<amit.getHealth()<<endl;
    return 0;
    }