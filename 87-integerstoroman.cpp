#include<iostream>

using namespace std;

int main(){
    int val[]= {1000 , 900 , 500 , 400 , 100, 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};
    string sym[] = {"M", "CM" , "D" , "CD" , "C" , "XC" , "L", "XL" , "X", "IX", "V" , "IV" , "I" };

    int nums;
    cin>>nums;

    string result = "";

    while(nums >0){
        int targetindex;
        int targetvalue;
        for(int i = 0 ; i<13 ; i++){
            if(val[i] <= nums){

                targetindex = i;
                targetvalue =val[i];
                break;
            }

        }

        int times = nums/targetvalue;
        while(times){
            result+=sym[targetindex];
            times--;
        }

        nums = nums % targetvalue;
    }

    cout<<result;

    return 0;
}