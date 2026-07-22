#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){


    int N;
    cin>>N;

    if(N<0 || N>100){
        cout<<"Invalid Input";
        return 0;
    }
    vector<int>hours;
    for(int i = 0 ; i<N ; i++){
        int temp;
        cin>>temp;
        if(temp <0 || temp >24){
            cout<<"Invalid Input";
            return 0;
        }
        hours.push_back(temp);

    }


    int sum = 0;
    float average = 0;

    for(int i = 0 ; i<hours.size() ; i++){
        sum+=hours[i];
    }

    average = sum/float(hours.size());

    int moreavg = 0;
  int count = 0;
    for(int i = 0 ; i<hours.size() ; i++){
        if(hours[i] > average){
            count++;
        }
    }


    cout<<"Total Hours: "<<sum<<endl;

    cout<<"Average Hours: "<<average<<endl;
    cout<<"Employees above average: "<<count<<endl;


    return 0;

}