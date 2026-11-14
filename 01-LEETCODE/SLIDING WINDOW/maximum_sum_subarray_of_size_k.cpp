//

/*
subarray--->ek ke baad ek jo aa rha h wo
*/


// arr = {7,1,2,5,8,4,9,3,6}

/*
7
7+1
7+1+2
7+1+2+5
7+1+2+5+8
7+1+2+5+8+4
*/

//approah -->first sort it

/*
                  "
//1,2,3,4,5,6,7,8,9
                "
*/
//the last se k tak ka dhoondh lo


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){

//     int k = 3;
//     vector<int>arr = {7,1,2,5,8,4,9,3,6};
//     int n = arr.size();
//     sort(arr.begin() , arr.end());

//     int idx = n-k;
//     int sum = 0;
//     for(int i = idx ; i<n ; i++){
//         sum+=arr[i];
//     }
//     cout<<sum;

//     return 0;
    
// }


// this will valid for sequence not for the array

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr = {7,1,2,5,8,4,9,3,6};

    int k= 3;
    int start = 0;
    int end = 0;

    int sum = 0;
    int maxSum = 0;

// 7,1,2
//10
    while(end <arr.size()){
        if(k){
        sum+=arr[end];
        end++;
        }
        else {
            sum = sum-arr[start]+arr[end];
            maxSum = max(sum , maxSum);
            start++;
            end++;
        }



    }

    cout<<maxSum;


}