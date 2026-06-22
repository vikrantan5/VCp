
#include<iostream>

using namespace std;

int main(){
    int arr[5] = {8,8,6,4,6};

    for(int i = 0 ; i<5 ; i++){
        for(int j = 0 ; j<5-i ; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }


}