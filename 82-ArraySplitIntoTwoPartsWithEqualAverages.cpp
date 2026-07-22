#include<iostream>
#include<vector>

#include<sstream>
using namespace std;


int main(){
    string s;
    getline(cin , s);

    vector<int>val;

    stringstream ss(s);

    string temp;
    while(getline(ss , temp , ' ')){
        int nums = stoi(temp);
        val.push_back(nums);

    }

    for(int i= 1 ; i<=val.size()-1 ; i++){
        int left = 0;
        int right = i;
        int sumleft = 0;
        int sumright = 0;

        

        for(int j = 0; j<i ; j++ ){
            sumleft+= val[j];
        }
        for(int k = i ; k<=val.size()-1 ; k++){
            sumright+=val[k];
        }

        int lsize = i;
        int rsize = val.size()-i;

        if(sumleft*lsize==sumright*rsize){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;

    
}