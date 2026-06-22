
#include<iostream>

using namespace std;

int main(){
    int arr[5] = {3,13,12,7,4};

    for(int i = 0; i<5 ; i++){
        for(int j = 4-i ; j>=0 ; j--){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }


}