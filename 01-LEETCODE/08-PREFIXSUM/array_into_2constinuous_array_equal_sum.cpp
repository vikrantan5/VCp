#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"enter the number of the element in array"<<endl;
    cin>>n;

    vector<int>arr(n);

    for(int i = 0 ;i<arr.size() ; i++){
        int temp ;
        cin>>temp;
        arr[i] = temp;
    }


    //prefix sum
    int sum = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        sum+=arr[i];
        arr[i] =sum;
    }

    //check4

    for(int i = 0 ; i<arr.size() ; i++){
        if(2*arr[i]==arr[arr.size()-1]){
            cout<<"yes ye hai"<<endl;
           return 0;
        }
    }

    cout<<"Nhi hai ye";
    return 0;
}