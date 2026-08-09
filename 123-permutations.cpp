#include<iostream>

using namespace std;


void permutation(string str , string temp ){
    if(str.size()==0){
        cout<<temp<<endl;
        return;
    }
    int n = str.size();
    for(int i = 0  ; i<n ; i++){
        char ch = str[i];
        string ss = str.substr(0 , i) +str.substr(i+1);
        permutation(ss , temp+ch);
    }

}

int main(){
    string str= "reshmi";
    
    string temp = "";
    permutation(str , temp);
}