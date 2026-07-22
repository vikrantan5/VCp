#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cout<<"print number of elems in the array";
    cin>>n;
    cout<<"enter "<<n << "values in the array"<<endl;
    vector<int>arr;
    for(int i = 0; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter target";
    int T;
    cin>>T;

    int i = 0 ;
    int j = i+1;
    int count = 0;
    while(j<n){
        if(arr[i]  !=  arr[j]){
            int res =arr[i]+arr[j];
            if(res % T==0){
                count++;
            }
        }
        i++;
        j++;
    }


    cout<<count;

    return 0;

}