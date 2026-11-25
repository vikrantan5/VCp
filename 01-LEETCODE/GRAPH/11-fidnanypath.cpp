#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;


vector<list<int>>graph;
unordered_set<int>visited;


void add_edge(int src ,int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}




bool dfs(int curr , int dest){
    if(dest==curr){
        return true;
    }

    visited.insert(curr);

    for(auto ele :graph[curr]){
        if(!visited.count(ele)){
            bool result = dfs(ele , dest);
            if(result){
                return true;
            }
        }
    }

    return false;



}

bool anypath(int src , int dest){
    return dfs(src , dest);
}

int main(){
    int v;
    cin>>v;

    graph.resize(v , list<int>());

    int e;
    cin>>e;

    while(e--){
        int s , d;
        cin>>s>>d;
        add_edge(s , d);
    }

    int s;
    int d;
    cin>>s >>d;
    cout<<anypath(s , d);
}