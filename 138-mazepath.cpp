#include<iostream>

using namespace std;

int maze(int sr , int sc , int er , int ec ){
    if(sr  > er || sc >ec){
        return 0;
    }
    if(sr==er && sc==ec){
        return 1;
    }

    int leftWay = maze(sr ,sc+1 , er , ec);
    int rightWay = maze(sr+1 ,sc , er , ec);
    int totalway = leftWay+rightWay;
    return totalway;
}

void printpath(int sr , int sc , int er , int ec  ,string path){
        if(sr  > er || sc >ec){
        return ;
    }
    if(sr==er && sc==ec){
       cout<<path<<endl;
       return;
    }
    printpath(sr ,sc+1 , er , ec , path+'R');
    printpath(sr+1 ,sc , er , ec ,path+'D');
}

int main(){
    // cout <<maze(0 , 0 , 1 , 1);
    printpath(0 , 0 , 6 , 6,"");
    
}