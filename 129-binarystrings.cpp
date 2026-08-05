#include<iostream>


using namespace std;


void binarystring(string temp  ,int n){
    if(temp.size()==n){
        cout<<temp<<" ";
        return;
    }

    binarystring(temp+'0' ,n);
    if(temp.size()==0 || temp[temp.size()-1] != '1'){
        binarystring(temp+'1' ,n);
    }
    
}


int main(){
    int n = 6;
    string temp="";

    binarystring(temp , n);
}