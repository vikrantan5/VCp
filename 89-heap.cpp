#include<iostream>


using namespace std;


class MaxHeap{
    int *arr;
    int size;
    int total_size;


    public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }


    // insert in heap
    void insert(int value){
        //if heap size available or not

        if(size ==total_size){
            cout<<"Heap over4 flow";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        //correct position me daalo

        while(index >0 && arr[(index-1)/2] < arr[index]){
            swap(arr[index] , arr[(index-1)/2]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<"is insereted in the heap"<<endl;
    }


    void print(){
        for(int i= 0; i<size ; i++){
            cout<<arr[i]<<" "<<endl;
            
        }
       
    }

    void Heapify(int n){
        int largest = n;
        int left = 2*n+1;
        int right = 2*n+2;


        if(left<size && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < size && arr[right]>arr[largest]){
            largest = right;
        }

        if(largest != n){
            swap(arr[n] ,arr[largest] );
            Heapify(largest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"heap overflow";
            return;
        }


        cout<<arr[0]<<"deleted from the heap;";
        arr[0] =arr[size-1];
        size--;

        if(size==0){
            return;
        }

        Heapify(0);

 
    }



};

int main(){
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.print();
    H1.insert(114);
    H1.insert(24);
    H1.insert(1);
    // H1.insert(5);
    H1.print();

}