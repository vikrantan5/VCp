#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;




bool cmp(pair<int, int>p1 , pair<int,int>p2){
    double r1=  (p1.second*1.0)/(p1.first*1.0);
    double r2=  (p2.second*1.0)/(p2.first*1.0);
    return r1>r2;
}

int fractionalKnapsack(vector<int>profit, vector<int>weight,int n, int kweight){
    vector<pair<int,int>>newArray;
    for(int i = 0 ; i<profit.size() ; i++){
        newArray.push_back({ weight[i],profit[i] });
    }
    sort(newArray.begin() , newArray.end() ,cmp);

    int totalProfit = 0;

    for(int i = 0 ; i<newArray.size() ;i++){
        if(newArray[i].first <=kweight){
            totalProfit+=newArray[i].second;
            kweight-=newArray[i].first;
        }
        else{
            totalProfit+=(newArray[i].second/newArray[i].first)*kweight;
            kweight = 0;
        }
        if(kweight==0){
            break;
        }
    }

    return totalProfit;

}

int main(){

    vector<int>profit = {60,100,120};
    vector<int>weight ={10,20,30};
    int n = 3;
    int kweight  =50;

    int finalResult =fractionalKnapsack(profit , weight , n ,kweight);

    cout<<finalResult;
}