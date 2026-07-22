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


    vector<vector<int>>rotatematrix(row , vector<int>(col));


    //rotate matrix

    int colStart = 0;
    int colEnd= col-1;
    int rowStart = 0;
    int rowEnd = row-1;

    for(int i = colStart ; i<=colEnd ; i++){
        int newmatrixrow = 0;
         int newmatrixcol = 0;
        for(int j = rowEnd ; j>=rowStart ; j-- ){
           
            rotatematrix[i][(col-1)-j] =matrix[j][i]; 
        }

    }

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ;j++){
            cout<<rotatematrix[i][j]<<" ";
        }
        cout<<endl;
    }




}