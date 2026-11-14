#include<iostream>
#include<vector>
using namespace std;

int main(){

    int firstmatrow;
    cout<<"Enter the first matrix row number"<<endl;
    cin>>firstmatrow;

    int firstmatcol;
    cout<<"Enter the first matrix col number"<<endl;
    cin>>firstmatcol;

    cout<<"Enter the elemments for the first matrix"<<endl;

    vector<vector<int>>matrix1(firstmatrow ,vector<int>(firstmatcol));

    for(int i = 0 ; i<firstmatrow ; i++){
        for(int j = 0 ; j<firstmatcol ; j++){
            int temp;
            cin>>temp;
            matrix1[i][j]= temp;
        }
    }



    // ============================================

    // second matrix



    int secmatrow;
    cout<<"Enter the second matrix row number"<<endl;
    cin>>secmatrow;

    int secmatcol;
    cout<<"Enter the second matrix col number"<<endl;
    cin>>secmatcol;

    cout<<"Enter the elemments for the second matrix"<<endl;

    vector<vector<int>>matrix2(secmatrow ,vector<int>(secmatcol));

    for(int i = 0 ; i<secmatrow ; i++){
        for(int j = 0 ; j<secmatcol ; j++){
            int temp;
            cin>>temp;
            matrix2[i][j]= temp;
        }
    }
    

    //=============================================

    // Resultanat matrix

    vector<vector<int>>result(firstmatrow , vector<int>(secmatcol));

    for(int i = 0 ; i<firstmatrow ;i++){
        for(int j = 0 ; j<secmatcol ; j++){
            int sum = 0;
            for(int k = 0 ; k<firstmatcol; k++){
                sum+= (matrix1[i][k]*matrix2[k][j]);
               
            }
             result[i][j] = sum;
        }
    }


    //first matrix
    cout<<"first matrix"<<endl;
    cout<<endl;
    for(int i = 0 ; i<firstmatrow ; i++){
        for(int j= 0 ; j<firstmatcol ; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    //second matrix
    cout<<"second matrix"<<endl;
    cout<<endl;
    for(int i = 0 ; i<secmatrow ; i++){
        for(int j= 0 ; j<secmatcol ; j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"result matrix"<<endl;
    cout<<endl;
    for(int i = 0 ; i<firstmatrow ; i++){
        for(int j= 0 ; j<secmatcol ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }




}