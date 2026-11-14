#include<iostream>




using namespace std;

int main(){
    int arr[] = {7,5,6,7,9,4,57,9};

    // // in array number stored in the index manner contiguous

    // // cout<<arr[2]<<endl;

    // // arr[2] = 455;
    // // cout<<arr[2]<<endl;

    // int n = sizeof(arr)/sizeof(arr[0]);
   
    // // cout<<n<<endl;

    // for(int i  = 0 ;i<n ; i++){
    //     cout<<arr[i]<<endl;
    // }


    int newarr[6];

    for(int i = 0 ; i<6 ; i++){
        int temp;
        cin>>temp;
        newarr[i] = temp;
    }

    cout<<"print the negative elemnt of array";
    for(int i = 0 ; i<6 ; i++){

        if(newarr[i]<0){
        cout<<newarr[i]<<endl;
        }
    }
   

}