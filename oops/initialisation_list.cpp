#include<bits/stdc++.h>
using namespace std;

class init_list{
    public:
    int rollno;
    int marks;

    init_list(int rn, int mks): rollno(rn), marks(mks){}


};

int main(){
   init_list fs(30,40);
   cout<<fs.marks<<','<<fs.rollno<<endl;
   return 0;
}