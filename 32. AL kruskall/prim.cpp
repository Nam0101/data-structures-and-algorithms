#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeSet(int N,int parent[]){
    for(int i=1;i<=N;i++){
        parent[i] = i;
    }
}

int find(int i,int parent[]){
    while(parent[i]!=i){
        i=parent[i];
    }
    return i;
}

bool cmp(vector<int> A,vector<int> B){
    return A[2]<B[2];
}

int theMinIsland(int N,vector<vector<int> > &edges){
    sort(edges.begin(),edges.end(),cmp);

    int parent[N+1];
    makeSet(N,parent);
    int cost=0;
    for(int i=0;i<edges.size();i++){
        int s=edges[i][0];
        int d=edges[i][1];
        int rS=find(s,parent);
        int rD=find(d,parent);
        if(rS!=rD){
            cost+=edges[i][2];
            parent[rS]=rD; // union
        }
    }
    return cost;
}

int main(){
    int N;
    cout<<"Enter the number of Island"<<endl;
    cin>>N;
    vector<vector<int> > edges; 
   for(int i=0;i<N;i++){
        vector<int> v1;
            int s;
            int e;
            int gia;
            cout<<"Enter start: ";
            cin>>s;
            cout<<"Enter end: ";
            cin>>e;
            cout<<"Enter cost: "<<s<<" to "<<e<<endl;
            cin>>gia;
            v1.push_back(s);
            v1.push_back(e);
            v1.push_back(gia);
        edges.push_back(v1);
    }
    /*for(int i=0;i<N;i++){
        for(int j=0;j <3;j++){
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<theMinIsland(N,edges);
}