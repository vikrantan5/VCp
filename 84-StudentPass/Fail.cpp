#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row;
    cin >>row;
    int col;
    cin>>col;


    int mat[row][col];
    for(int i = 0 ; i<row ; i++){
        for(int j = 0; j<col ; j++){
            int temp;
            cin>>temp;
            mat[i][j] =temp;
        }
    }

   vector<int> passmarks(col);

    for(int i = 0 ; i<col ;i++){
        int sum= 0;
        for(int j = 0; j<row ; j++){
            sum+=mat[j][i];
        }
        passmarks[i] = sum/row;
    }


    for(int i = 0 ; i<row ; i++){
        int count = 0;
        for(int j = 0 ; j<col ; j++){
            if(mat[i][j] > passmarks[j]){
                count++;
            }
            
        }
        if(count >= (col + 1) / 2){
            cout<<"PASSED"<<endl;
        }
        else{
            cout<<"FAILED"<<endl;
        }
    }


    return 0;






}