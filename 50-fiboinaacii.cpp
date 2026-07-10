#include<iostream>

using namespace std;

int main(){
    int N;
    cin >>N;

    int first = 0;
    int second =1;
    if(N==0 || N==1){
        return N;
    }

int f = N-2;
    while(f--){
        int temp = second;
        second = first+second;
        first = temp;
    }

    cout<< second <<endl;
}