#include<iostream>
#include<vector>

#include<sstream>
using namespace std;



int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<int>scores;
    string temp;

    while(getline(ss , temp ,' ')){
        int num = stoi(temp);
        scores.push_back(num);
    }

    // for(int ch: scores){
    //     cout<<ch<<" ";
    // }

    if(scores.size() != 7){
    cout << "Invalid Input";
    return 0;
}

    int sum = 0;


    for(int i = 0 ;  i<scores.size() ; i++){
        sum+=scores[i];
    }
    int average = sum/scores.size();

    cout<<sum<<" "<<average<<endl;

    return 0;






}