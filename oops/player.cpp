#include<bits/stdc++.h>
using namespace std;

class Gun{
    public:
    int ammo;
    int scope;
    int safety;

};

class player
{
    

    class Helmet{
        int safety;
        int hp;

        public:
        //setters
        void setSafety(int s){
            safety=s;
        }
        void setHp(int hp){
            this->hp=hp;
        }
        //getters

        int getSafety(){
            return safety;

        }
        int getHp(){
            return hp;
        }
    };
    int score;
    int health;
    int kills;
    int id;
    Gun gun;
    Helmet helmet;

    public:
// getters:-
    int getScore(){
        return score;
    }
    int getHelath(){
        return health;
    }
    int getKills(){
        return kills;
    }

    Gun getGun(){
        return gun;
    }

    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getSafety()<<endl;
    }


// setters:-
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setKills(int kills){
        this->kills=kills;
    }

    void setGun(Gun gun){
        this->gun=gun;
    }

    void setHelmet(int safety){
        Helmet *hlmt=new Helmet();
        hlmt->setSafety(safety);
        hlmt->setHp(safety*4);
        this->helmet=*hlmt;
    }



};

//this is the function hich is of object return type
player maxScore(player a, player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}


int main(){
    player abhishek; //static allocation (compile time memory allocation )
    player *ranjan=new player(); //dynamic allocation (run time memory allocation, this is pointer to object)
    player ranjanObject=*ranjan; // here ranjan object is created from ranjan pointer

    abhishek.setHealth(90);
    abhishek.setKills(100);
    abhishek.setScore(110);

    Gun akm;
    akm.ammo=100;
    akm.safety=90;
    akm.scope=99;

    

    abhishek.setGun(akm);
    abhishek.setHelmet(60);
    abhishek.getHelmet();
    
     Gun abhiGun=abhishek.getGun();
     cout<<abhiGun.ammo<<','<<abhiGun.safety<<','<<abhiGun.scope<<endl;

    ranjanObject.setScore(100);
    ranjanObject.setHealth(100);
    ranjanObject.setKills(30);

    player bestPlayer=maxScore(abhishek, ranjanObject);
    cout<<bestPlayer.getScore()<<endl;

}