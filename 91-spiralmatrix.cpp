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

    //spiral matrix

    int colStart= 0;
    int colEnd =col-1;
    int rowStart = 0;
    int rowEnd  = row-1;

    while(colStart <= colEnd && rowStart <= rowEnd){
        for(int i = colStart ; i<=colEnd ; i++){
            cout<<matrix[rowStart][i]<<" ";
        }
        rowStart++;
        for(int i = rowStart ; i<=rowEnd ; i++){
            cout<<matrix[i][colEnd]<<" ";
        }
        colEnd--;
        if(rowStart<=rowEnd){
            for(int i = colEnd ; i>=colStart ; i--){
                cout<<matrix[rowEnd][i]<<" ";
            }
        }
        rowEnd--;
        if(colStart<=colEnd){
            for(int i = rowEnd  ; i>=rowStart ; i--){
                cout<<matrix[i][colStart]<<" ";
            }
        }
        colStart++;
    }
}