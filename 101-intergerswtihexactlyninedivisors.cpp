#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


void numberofDivisors(int n , int &count){
    for(int i = 1 ;i<=sqrt(n) ; i++){
        if(n%i==0){
            if(i != n/i){
                count+=2;
            }
            else{
                count+=1;
            }
        }
    }
}


int main(){
    int nums;
    cin>>nums;

    int resultCount = 0;
    vector<int>result;
    for(int i = 1  ; i<=nums ; i++){
        int count =  0;
        numberofDivisors(i , count);
        if(count==9){
            result.push_back(i);
            resultCount++;
        }


    }

    cout<<resultCount<<endl;
    for(int i= 0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
}