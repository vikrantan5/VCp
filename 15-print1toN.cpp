#include<iostream>

using namespace std;


void print1toN(int n , int target){
    if(n==target){
        return ;
    }
    cout<<n<<" ";


    print1toN(n+1 , target);
}

int main(){
    int n;
    cin>>n;
    print1toN(0 , n);

}