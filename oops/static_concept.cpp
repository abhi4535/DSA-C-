#include<bits/stdc++.h>
using namespace std;

class Bike{
 static int noOfBike;// static allocation this belongs to class not object
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
// static function ,this can only access static function
 static void setNoOfBike(int no){
      noOfBike=no;
 }

 
 
};

int Bike::noOfBike=2;// this belongs to only class, here we scope resolution operator i.e, (::) this helps to identify the varibles

int main(){
    Bike pp(90,80);
    cout<<pp.getEngine()<<','<<pp.getMilage()<<','<<pp.getBikes()<<endl;

    return 0;


}