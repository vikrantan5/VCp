#include<iostream>
#include<math.h>

using namespace std;


int main(){
    int n;
    cin>>n;

    long long binary = 0;
    int i = 1;
    while(n){
        int temp = (n%2)* i;
        i=i*10;
      binary = binary+ temp;
      n =n/2;

    }
    cout<<binary<<endl;

    // reverse

 
}