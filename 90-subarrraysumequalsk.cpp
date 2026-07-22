
#include<bits/stdc++.h>
using namespace std;


int main(){

    int k;
    cin>>k;
    string s;

    cin.ignore();   
    getline(cin , s);

    vector<int>nums;

    


    string newstring;
    if(s[0]=='[' && s[s.size()-1]==']'){
         newstring = s.substr(1 , s.size()-2);
    }


    stringstream ss(newstring);


    string temp;
   while(getline(ss ,temp , ',' )){
    int tempnum = stoi(temp);
    nums.push_back(tempnum);
   }

//    for(int i = 0 ; i<nums.size() ; i++){
//     cout<<nums[i]<<" ";
//    }

    int current_sum = 0;
    int total_count = 0;
    unordered_map<int  , int>mp;
    mp[0] = 1;

    for(int i= 0 ; i<nums.size() ; i++){
        current_sum+=nums[i];
        int search= current_sum-k;
        if(mp.find(search) !=mp.end()){
            total_count+=mp[search];
        }
        if(mp.find(current_sum)==mp.end()){
            mp[current_sum]++;
        }
        else{
            mp[current_sum]++;
        }
    }

    cout<<total_count<<" ";

    return 0;




}