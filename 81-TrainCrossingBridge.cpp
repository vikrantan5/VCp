#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int ltrain; //meters
    int strain; //kmph
    int lbridge; //meters

    cin>>ltrain>>strain>>lbridge;

    int totallength = ltrain + lbridge;

    float smeters = (strain*5.0)/18.0   ;

    float stime = totallength/smeters;


    cout<<fixed<<setprecision(2)<<stime<<endl;
}