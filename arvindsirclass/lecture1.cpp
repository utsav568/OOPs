#include <iostream>
using namespace std;
Class Player{
    private:
    int score;
    string name;
    int damage;
    public:
    void setscore(){
        cin>>score;
    }
    void setdamage(){
        cin>>damage;
    }
    void setname(){
        cin>>name;
    }


};
int main(){
    Player harsh;
    harsh.setscore();
    harsh.setdamage();
    harsh.setname();


}