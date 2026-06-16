// sum of N natral number

#include<iostream>

using namespace std;



int sumofnat( int target){
    if(target ==0){
        return 0;
    }
    return target+sumofnat(target-1);

}

int main(){
    int n;
    cin>>n;
   


   int result = sumofnat(n);
   cout<<result;
   return 0;
}