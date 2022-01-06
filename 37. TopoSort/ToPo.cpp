#include <bits/stdc++.h>
using namespace std;

const int maxn=1001;
int n,m;
vector<int> adj[maxn];
bool visited[maxn];
vector<int> topo;

void input(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}

void DFS(int u){
    visited[u]=true;
    for(int i=1; i<=adj[u].size(); i++){
        if(!visited[adj[u].at(i)]){
            DFS(adj[u].at(i));
        }
    }
    topo.push_back(u);
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    input();
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            DFS(i);
        }
    }
    reverse(topo.begin(), topo.end());
    for(int i=1; i<=topo.size(); i++){
        cout<<topo.at(i)<<endl;
    }
}   