#include<iostream>

using namespace std;



int exponent(int num, int pow){
    if(pow==1){
        return num;
    }
    int ans =exponent(num , pow/2);
    if(pow%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*num;
    }
    
}

int main(){
    int n;
    cin >>n;
    int power;
    cin>>power;

   int result =   exponent(n , power);
   cout<<result;
}