#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int items;
    vector<int>weights;
    vector<int>values;

    cin>>items;

    for(int i = 0 ; i<items ; i++){
        int w , v;
        cout<<"Enter weight and value of item";
        cin>>w>>v;
        weights.push_back(w);
        values.push_back(v);
    }

    int capacity;
    cout<<"Enter capacity of knapsack";
    cin>>capacity;
    vector<int>ratio;
    for(int i = 0 ; i<items ; i++){
        ratio.push_back(values[i]/weights[i]);
    }

    sort(ratio.begin() , ratio.end() , greater<int>());

    while(capacity){
        
    }
}