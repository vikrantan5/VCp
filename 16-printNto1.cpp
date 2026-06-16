#include<iostream>

using namespace std;


void printNto1(int n, int target){
    if(n==target){
        return;
    }
    cout<<n<<" ";
    printNto1(n-1 , 0);
}
int main(){
    int n;
    cin>>n;

    printNto1(n , 0);
}