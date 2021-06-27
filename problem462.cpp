// Find Reachability of source vertex to destination vertex in undirected graph -

#include<vector>
#include<iostream>
using namespace std;

class Graph{
    public:
        vector<vector<int>> adjList;
        int noOfNodes;
    
    Graph(int n){
        noOfNodes = n;
        adjList = vector<vector<int>>(n+1);
    }

    void addEdge(int u, int v){
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool find_reachability(int s, int d){
        int flag1 = 0, flag2 = 0;
        for(int i=0;i<adjList[s].size();i++){
            if(adjList[s][i] == d)  flag1 = 1;
        }
        for(int i=0;i<adjList[d].size();i++){
            if(adjList[d][i] == s)  flag2 = 1;
        }
        if(flag1 == 1 && flag2 == 1)  return true;
        return false;
    }
};

int main(){
    int n;
    cin>>n;
    Graph obj(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vector<int> v;
        v.push_back(temp);
        obj.adjList.push_back(v);
    } 

    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;
        obj.addEdge(u, v);
    }

    int source, destination;
    cin>>source>>destination;
    cout<<obj.find_reachability(source, destination);

    return 0;
}