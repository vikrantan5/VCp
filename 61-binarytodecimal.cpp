#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int i = 0;
int sum = 0;
    while(n>0){
        int digit = n%10;
        sum=digit *pow(2,i)+sum;
        i++;
        n/=10;  
    }

    cout<<sum<<endl;

    return 0;


}