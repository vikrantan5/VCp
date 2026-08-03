#include<iostream>

using namespace std;


void skipoc(string str , string & newstr , int idx){


    if(idx==str.size()){
        return;
    }
    if(str[idx]!='a'){
        newstr+=str[idx];
    }
    skipoc(str , newstr , idx+1);
}

int main(){

    string str= "raghav garg";

    int idx = 0;
    string newstr;
    skipoc(str , newstr,idx);
    cout<<newstr;
}