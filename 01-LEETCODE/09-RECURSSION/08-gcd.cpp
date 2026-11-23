#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int num1;
    cin>>num1;

    int num2;
    cin>>num2;


    int minnum = min(num1 , num2);

    int maxians = INT_MIN;
    for(int i = 1 ; i<=minnum ; i++){
        if(num1%i==0 && num2%i==0 && i>maxians){
            maxians = i;
        }
    }
    cout<<maxians;


}