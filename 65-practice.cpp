#include<iostream>
#include <cmath>


using namespace std;



int target(int n){
    return log2(n & -n)+1;
}
int main(){
    int n;
    cin>>n;
    cout<<target(n);   
}