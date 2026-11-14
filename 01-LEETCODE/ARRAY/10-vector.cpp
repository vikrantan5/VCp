//dynamoc array is vector it has unlimited size

#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int>arr(5,17);

    for(int i =0 ; i<arr.size() ;i++){
        cout<<arr[i];
    }

}

//howit works internally