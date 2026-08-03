#include<iostream>
#include<vector>
using namespace std;



void subset(string str, string res , vector<string>&final){

    if(str.size()==0){
        final.push_back(res);
        return;
    }
    char temp = str[0];

    subset(str.substr(1) ,res+temp , final );
    subset(str.substr(1) ,res , final );
}

int main(){

vector<string>final;
    string s;
    s = "abcdcvbndfghhgh";
    string result = "";

    subset(s , result , final);

    for(int i = 0 ; i<final.size() ; i++){
        cout<<final[i]<<endl;
    }
  

}