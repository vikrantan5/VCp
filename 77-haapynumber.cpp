#include<iostream>
#include<unordered_map>

using namespace std;

int convertDigit(int n){

    int sum = 0;
    while(n){
        int digit =n%10;
        sum+=digit*digit;
        n/=10;
    }
    return sum;

}


int main(){
    unordered_map<int , int>mp;
    int n;
    cin>>n;

    int res= n;
    int count =0;

    while(res != 1){
        if(mp.find(res) !=mp.end()){
            cout<<"not a happy number";
           return 0;
        }
        mp[res]++;
       res =  convertDigit(res);
       count++;
    }

    cout<<count;
}