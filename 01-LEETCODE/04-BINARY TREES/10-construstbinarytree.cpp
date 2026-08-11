#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val =val;
        this->left = NULL;
        this->right = NULL;
    }
};



void display(Node* root){

    if(root==NULL){
        return;
    }
    // cout<<root->val<<" ";
    cout<<root->val<<" "; 
    display(root->left);
    
    display(root->right);
    // cout<<root->val<<" ";
}

int main(){
    int arr[] = {1,2,3,4,5,-1,6,-1,-1,7,8,9,-1};

    int n =sizeof(arr)/sizeof(arr[0]);
    int i = 1;

    queue<Node*>q;
    
    Node* root =new Node(arr[0]);
    q.push(root);

    while(!q.empty() && i < n){
        Node* temp = q.front();
        q.pop();
        if(arr[i] != -1){
            Node* leftNode = new Node(arr[i]);
            temp->left= leftNode;
            q.push(leftNode);
            i++;
        }
        else{
            i++;
        }
        if(arr[i] != -1){
            Node* rightNode=new Node(arr[i]);
            temp->right = rightNode;
            q.push(rightNode);
            i++;
        }
        else{
            i++;
        }
    }

    
    display(root);

}



