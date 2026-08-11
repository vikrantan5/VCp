#include<iostream>
#include <climits>
#include<vector>
using namespace std;


class Node{
    public:

    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


void display(Node* root){

    if(root==NULL){
        return;
    }
    // cout<<root->val<<" ";
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
    // cout<<root->val<<" ";
}

void printnth(Node* root, int n , vector<int>&result){
    if(root==NULL){
        return;
    }

    if(n==1){
        result.push_back(root->val);
        return;
    }


    printnth(root->left , n-1 , result);
    printnth(root->right , n-1 , result);
}
void printnthrev(Node* root, int n , vector<int>&result){
    if(root==NULL){
        return;
    }

    if(n==1){
        result.push_back(root->val);
        return;
    }


    printnthrev(root->left , n-1 , result);
    printnthrev(root->right , n-1 , result);
}


int levels(Node* root){
    if(root== NULL){
        return 0;
    }

    return 1+max(levels(root->left), levels(root->right));
}

void levelorder(Node* root){
    int n =levels(root);
     vector<int>result;
    for(int i = 0 ; i <=n ; i++){
        printnth(root , i , result);
    }
    for(int i = 0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
}



int main(){

    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(9);
    Node* d = new Node(2);
    Node* e = new Node(6);
    Node* f = new Node(9);
    Node* g = new Node(5);
    Node* h = new Node(11);
    Node* i = new Node(5);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
   e->left = g;
   e->right = h;
   f->left =i;
    
    // display(a);
   
    levelorder(a);

}