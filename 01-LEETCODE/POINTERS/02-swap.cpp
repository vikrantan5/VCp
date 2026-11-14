#include<iostream>

using namespace std;



void swapping(int* ptr1 , int* ptr2){

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main(){
    int a = 60;
    int b =30;

    swapping(&a , &b);

    cout<<a<<" "<<b<<endl;
}