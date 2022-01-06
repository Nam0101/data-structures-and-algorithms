#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
    for(int i=0;i<N;i++){
        for(int j=0;j <3;j++){
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }
    //cout<<theMinIsland(N,edges);
}