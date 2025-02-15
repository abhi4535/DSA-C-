#include<bits/stdc++.h>
using namespace std;

class Bike{
 static int noOfBike;
 int engine;
 int milage;

 public:

 Bike(int engine, int milage){
    this->engine=engine;
    this->milage=milage;
    cout<<"constructor called"<<endl;
 }

 int getEngine(){
    return engine;
 }
 int getMilage(){
    return milage;
 }
 int getBikes(){
    return noOfBike;
 }

 static void setNoOfBike(int no){
      noOfBike=no;
 }

 
 
};

int Bike::noOfBike=2;

int main(){
    Bike pp(90,80);
    cout<<pp.getEngine()<<','<<pp.getMilage()<<','<<pp.getBikes()<<endl;

    return 0;


}