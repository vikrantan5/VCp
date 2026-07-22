#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr1[]= {1,5,8,12,14,27};
    int arr2[]= {2 , 6 , 15 , 20 , 29};

    int i = 0;
    int j = 0;

    vector<int>result;
    int sizer1 = sizeof(arr1)/sizeof(arr1[0]);
    int sizer2 = sizeof(arr2)/sizeof(arr2[0]);
    while(i<sizer1 && j <sizer2){
        if(arr1[i] < arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else{
            result.push_back(arr2[j]);
            j++;
        }
        
    }

    while(i<sizer1){
        result.push_back(arr1[i]);
        i++;
    }
    while(j<sizer2){
        result.push_back(arr2[j]);
        j++;
    }


    for(int i = 0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }


    return 0;
}