#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;


vector<list<int>>graph;
vector<vector<int>>result;
unordered_set<int>visited;
void add_edge(int src , int dest ,bool bi_dir =true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }

}

void dfs(int curr , int dest , vector<int>path){
    
    if(curr==dest){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;

    }

    visited.insert(curr);
    path.push_back(curr);

    for(auto neighbour: graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour , dest , path);

        }
    }
    visited.erase(curr);
    path.pop_back();
    return;


}


void allpath(int src , int dest ){
    vector<int>path;

    dfs(src , dest , path);
}

int main(){
    int v;
    cin>>v;

    graph.resize(v , list<int>());

    int e;
    cin>>e;
    while(e--){
        int s;
        int d;
        cin>>s>>d;
        add_edge(s , d);
    }

    int s;
    int d;
    cin>>s>>d;
    allpath(s , d);

    for(int i = 0 ;i<result.size() ; i++){
    
        for(auto ele : result[i]){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }


}