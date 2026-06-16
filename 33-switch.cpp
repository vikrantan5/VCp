#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    switch(n){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thrusday";
        break;

        case 5:
        cout<<"frinday";
        break;
        case 6:
        cout<<"saturday";
        break;

        default:
        cout<<"not a week";
        break;
    }


    return 0;  
}