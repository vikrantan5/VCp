#include<iostream>

#include<vector>

using namespace std;

int main(){

    //row and col input
    int row;
    cin>>row;
    int col;
    cin>>col;


    //matrix creation
    vector<vector<int>>matrix(row , vector<int>(col));

    //inputs taken
    for(int i = 0; i<row  ;i++){
        for(int j = 0;j<col; j++){
            int temp;
            cin>>temp;
            matrix[i][j] = temp;
        }
    }


    for(int i = 0; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            if(matrix[i][j]==0){
                //set its all rows zero
                int k= 0;
                while(k<col){
                    matrix[i][k] = 0;
                    k++;
                }


                //set its all col zero
                int m = 0;
                while(m<row){
                    matrix[m][j] = 0;
                    m++;

                }
            }
        }
    }


  

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }




}