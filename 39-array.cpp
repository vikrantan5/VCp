// search element



// 10 , 20 , 7, 11 , 8 , 4


#include<iostream>

using namespace std;

int main(){


    int n;
    cin >>n;
    int arr[n];
    for(int i = 0 ; i<n;  i++){
        cin>>arr[i];
    }

    int target;
    cin >> target;

    for(int i =0 ; i<n ; i++){
        if(arr[i]==target){
            cout<<"elemnt found";
            return 0;
        }
    }
    cout<<"element not found";


    return 0;

}