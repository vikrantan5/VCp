#include<iostream>


using namespace std;

int main(){
    int totalvehicle ;
    int wheels;

    cin>>totalvehicle>>wheels;


    int fourwheel = (wheels-2*totalvehicle)/2;
    cout<<"fourwheeler"<<fourwheel<<endl;
    cout<<"twowheelers"<<totalvehicle-fourwheel;




}