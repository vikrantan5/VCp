#include<iostream>
#include<set>
using namespace std ;

int main(){
    int mini;
    int maxi;

    cin>>mini>>maxi;

    for( int i = mini ; i<=maxi ; i++){
        if(i%7 != 0){
            continue;
        }

        if(i%5==0){
            continue;
        }



        set<int>st;
        int temp =i;

        int count = 0;

        int repeated = false;

        while(temp){
            int digit = temp %10;
            if(st.find(digit) == st.end()){
                st.insert(digit);
            }
            else{
                repeated = true;
               break;
            }
            temp /=10;
            count++;
        }

        if(repeated){
            continue;
        }
        if(count==1){
            continue;
        }

        cout<<i<<" ";

    }

    return 0;
}