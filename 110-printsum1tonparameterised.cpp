#include<iostream>

using namespace std;


int sumpara(int num , int &sum){
    if(num==0){
        return 0;
    }
    return num + sumpara(num-1 , sum);
}

int main(){
    int sum = 0;
    int n;
    cin>>n;
    int result =sumpara(n ,sum);
    cout <<result;
}