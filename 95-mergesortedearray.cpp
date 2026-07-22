#include<iostream>
#include<vector>
using namespace std;

int main(){
    int firstarr;
    cin>>firstarr;

      vector<int>farr;
    for(int i = 0 ; i<firstarr ; i++){
        int temp;
        cin>>temp;
        farr.push_back(temp);

    }


    int secarr;
    cin>>secarr;

    vector<int>sarr;

    for(int i = 0 ; i<secarr ; i++){
        int temp;
        cin>>temp;
        sarr.push_back(temp);
    }


    int i = 0;
    int j = 0;
    vector<int>newarr(firstarr+secarr);
    int k = 0;
    while(i<farr.size() && j<sarr.size()){
        if(farr[i] < sarr[j]){
            newarr[k] = farr[i];
            k++;
            i++;
        }
        else{
            newarr[k] = sarr[j];
            j++;
            k++;
        }
    }

    while(i<farr.size()){
        newarr[k] = farr[i];
            i++;
            k++;
    }
    while(j<sarr.size()){
          newarr[k] = sarr[j];
            k++;
            j++;
    }


    for(int i =0;  i<newarr.size() ; i++){
        cout<<newarr[i]<<" ";
    }


    return 0;

  
}