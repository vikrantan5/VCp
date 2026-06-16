#include<iostream>

using namespace std;

int main(){
    int first = 0;
    int second =1;

    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        if(i==0){
            cout<<first<<endl;
        }
        else if(i==1){
            cout<<second<<endl;
        }
        else{
            int temp=first+second;
            cout<<temp<<endl;
            first= second;
            second = temp;
        }
    }

    return 0;


}