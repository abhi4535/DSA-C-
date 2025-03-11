#include<bits/stdc++.h>
using namespace std;

class vehicle{// base class or parent class
    public:
    int tyreSize;
    int engine;
    string camppanyName;

};

class car:public vehicle{//here car inherit vehicle
    int steringSize;
};

class bike:public vehicle{// this is also child of vehicle
    int handleSize;
};

int main(){

}