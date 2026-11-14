#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>


using namespace std;

int main(){

    string str = "vikrant is am am am a maths teacher and he is also a DSA mentor";

    stringstream ss(str);

    string temp;

    vector<string>arr;

    while(ss>>temp){
        arr.push_back(temp);
    }


    sort(arr.begin() , arr.end());


    // for(int i =0 ; i<arr.size() ; i++){
    //     cout<<arr[i]<<endl;
    // }



    int count = 0;
    string elem = "";


    int i = 0;
    while(i<arr.size()-1){
        int localcount = 0;
        string localelem = "";

        while(arr[i]==arr[i+1]){
            localcount++;
            localelem = arr[i];
            i++;
        }
        if(localcount>count){
            count =localcount;
            elem = localelem;
        }
        i++;
    }

    cout<<elem;


}