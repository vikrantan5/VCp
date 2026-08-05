#include<iostream>
#include<vector>
using namespace std;


void subarray(int arr[] ,vector<int>temp ,int n ,int idx){

    if(idx==n){
        for(int i = 0 ; i<temp.size() ; i++){
            cout<<temp[i]<<" ";
            
        }
        cout<<endl;
        return;
    }
  subarray(arr , temp , n , idx+1);
    if(temp.size()==0 || arr[idx-1]==temp[temp.size()-1]){
      
       temp.push_back(arr[idx]);
        subarray(arr , temp , n , idx+1);
    }

    

}


int main(){
    int arr[] = {1 ,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>temp;
    subarray(arr , temp , n , 0 );
}