#include<iostream>
#include <climits>
#include<stack>
#include<vector>
#include<algorithm>
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


void preorder(Node* root){
    stack<Node*>st;

    st.push(root);
    while(!st.empty()){
        
    }

}

void leftBoundary(Node* root , vector<int>&result){
    if(root == NULL) return;
    if(root->left==NULL && root->right==NULL){
        return;
    }
    if(root->left==NULL && root->right !=NULL){
        result.push_back(root->val);
        leftBoundary(root->right , result);
    }
    else{
        result.push_back(root->val);
    leftBoundary(root->left ,result);
    }
}
void rightBoundary(Node* root , vector<int>&result){
     if(root == NULL) return;
    if(root->left==NULL && root->right==NULL){
        return;
    }
    if(root->right==NULL && root->left !=NULL){
        result.push_back(root->val);
        rightBoundary(root->left , result);
    }
    else{
        result.push_back(root->val);
    rightBoundary(root->right ,result);
    }
}
void leafNode(Node* root , vector<int>&result){
     if(root == NULL) return;
    if(root->left==NULL && root->right==NULL){
        result.push_back(root->val);
        return;
    }
    leafNode(root->left , result);
    leafNode(root->right , result);
}

void boundary(Node* root, vector<int>&result){
    

    if(root == NULL){
        return;
    }

    // Root
    result.push_back(root->val);

    // Left boundary
    leftBoundary(root->left, result);

    // Leaf nodes
    leafNode(root, result);

    // Right boundary
    vector<int> right;

    rightBoundary(root->right, right);

    // reverse order
    reverse(right.begin(), right.end());

    for(int x : right){
        result.push_back(x);
    }
}



int main(){

Node* a = new Node(1);
Node* b = new Node(2);
Node* c = new Node(3);
Node* d = new Node(4);
Node* e = new Node(5);
Node* f = new Node(6);
Node* g = new Node(7);
Node* h = new Node(8);
Node* i = new Node(9);
Node* j = new Node(10);
Node* k = new Node(11);
Node* l = new Node(12);
Node* m = new Node(13);
Node* n = new Node(14);
Node* o = new Node(15);
Node* p = new Node(16);
Node* q = new Node(17);
Node* r = new Node(18);
Node* s = new Node(19);
Node* t = new Node(20);
Node* u = new Node(21);
Node* v = new Node(22);
Node* w = new Node(23);
Node* x = new Node(24);
Node* y = new Node(25);
Node* z = new Node(26);
Node* aa = new Node(28);
Node* ab = new Node(29);
Node* ac = new Node(27);   // image me 27 nahi hai

// Root
a->left = b;       // 1 -> 2
a->right = c;      // 1 -> 3

// Left subtree
b->left = d;       // 2 -> 4
b->right = e;      // 2 -> 5

d->left = g;       // 4 -> 7

g->right = k;      // 7 -> 11

k->left = o;       // 11 -> 15
k->right = p;      // 11 -> 16

o->left = s;       // 15 -> 19
s->right = x;      // 19 -> 24

e->left = h;       // 5 -> 8

h->right = l;      // 8 -> 12

l->right = q;      // 12 -> 17

q->left = t;       // 17 -> 20
q->right = u;      // 17 -> 21

t->left = y;       // 20 -> 25
t->right = z;      // 20 -> 26

u->right = ab;     // 21 -> 29


// Right subtree
c->left = f;       // 3 -> 6

f->left = i;       // 6 -> 9
f->right = j;      // 6 -> 10

i->right = m;      // 9 -> 13

j->right = n;      // 10 -> 14

n->left = r;       // 14 -> 18

r->left = v;       // 18 -> 22
r->right = w;      // 18 -> 23

v->right = aa;     // 22 -> 28
    

vector<int>result;
  boundary(a ,result);

  for(int i = 0 ; i<result.size() ; i++){
    cout<<result[i]<<" ";
  }

}