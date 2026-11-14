#include<iostream>

using namespace std;

int main(){
    // int x[7];



    // x[0] =9;
            // ptr
    // int arr[] = {1,4,5,8,7,9,6,3};




    // cout<<arr<<endl;

    // cout<<&arr[0]<<endl;

    // int* ptr = arr;
    // cout<<ptr<<endl;
    // int* ptrs = &arr[0];
    // cout<<ptrs[2]<<endl;





    // int x = 10;
    // cout<<x<<endl;

    // int *ptr = &x;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;


    int arr[] ={1,5,9,6,4,9,6,4,3,2};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;


    int* ptr = arr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    for(int i = 0 ; i<10 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

}