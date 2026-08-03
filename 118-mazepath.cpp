#include<iostream>

using namespace std;



int maze(int sr , int sc, int er , int ec){



    if(sr>er || sc >ec){
        return 0;
    }
    if(sr==er && sc==ec){
        return 1;
    }
    int rightWay = maze(sr , sc+1,er , ec );
    int downWay = maze(sr+1 , sc,er , ec );

    return rightWay+downWay;

}




void  printPath(int sr , int sc, int er , int ec , string st){



    if(sr>er || sc >ec){
        return ;
    }
    if(sr==er && sc==ec){
        cout<<st;
    }
     printPath(sr , sc+1,er , ec , st+'R');
     printPath(sr+1 , sc,er , ec  , st+'D');

    return;

}




int mazeone(int sr , int sc){



    if(sr<1 || sc <1){
        return 0;
    }
    if(sr==1 && sc==1){
        return 1;
    }
    int rightWay = mazeone(sr , sc-1 );
    int downWay = mazeone(sr-1 , sc );

    return rightWay+downWay;

}


void printpathone(int row , int col , string s){
    if(row <1 || col <1){
        return ;
    }
    if(row==1 && col==1){
      cout<<s<<endl;
    }
    printpathone(row , col-1 , s+'R');
    printpathone(row-1 , col , s+'D');
}


int main(){
    int result = maze(1,1,5,5 );
    // printPath(1,1,5,5," ");
    // 
    int che = mazeone(5,5);
    printpathone(5,5,"");
    // cout<<che;
}