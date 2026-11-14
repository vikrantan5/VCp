#include<iostream>

using namespace std;

int main(){

    int arr[] = {8,8,58,55,5,3,45,55,45,2,33,20};
    int search = 55;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){
        if(arr[i]==search){
            cout<<"Milgya beta "<<search<<endl;
            return 0;
        }
    }
    cout<<"Nahi hai "<<search;
    return 0;


}