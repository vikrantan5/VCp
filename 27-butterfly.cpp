#include<iostream>


using namespace std;


int main(){
    int row;
    cin>>row;

    for(int i = 1 ; i<= row ; i++){
        for(int j =1 ; j<=2*row ; j++){
            if(j<=i || j > 2*row - i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    for(int i = row ; i>=1 ; i--){
        for(int j =2*row ; j>=1 ; j--){
            if(j<=i || j > 2*row - i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}