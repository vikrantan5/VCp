#include<iostream>
#include<sstream>


using namespace std;

int main(){


    string str = "vikrant si a good boy";

    stringstream ss(str);

    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }

}