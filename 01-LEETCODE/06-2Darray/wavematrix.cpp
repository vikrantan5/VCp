#include<iostream>

#include<vector>

using namespace std;

int main(){

    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    int col;
    cout<<"Enter the number of Cols"<<endl;
    cin>>col;

    vector<vector<int>>matrix(row , vector<int>(col));

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            int temp;
            cin>>temp;
            matrix[i][j] =temp;
        }
    }

    for(int i = 0 ;i<row ; i++){
      
            for(int j = 0 ; j<col; j++){
                if(i%2==0){
                    cout<<matrix[i][j];
                }
                else{
                    cout<<matrix[i][col-1-j];
                }
                

            }
            cout<<endl;
       
    }
}