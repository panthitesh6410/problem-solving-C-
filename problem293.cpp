// Print Adjacency List for Undirected / Bidirectional Graph :

#include<vector>
#include<iostream>
using namespace std;

class Graph{
public:
    vector<vector<int>> adjList;
    int nodes;
    Graph(int n){
        nodes = n;
        adjList = vector<vector<int>>(n);
    }
    void addEdge(int u, int v){
        adjList[v].push_back(u);
        adjList[u].push_back(v);
    }
    void printAdjList(){
        for(int i=0;i<nodes;i++)
        {
            cout<<i<<"->";
            for(int j=0;j<adjList[i].size()-1;j++)
                cout<<adjList[i][j]<<"->";
            cout<<adjList[i][adjList[i].size()-1];
            cout<<endl;
        }
    } 
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int v, e;
        cin>>v>>e;
        Graph obj(v);
        for(int i=0;i<e;i++)
        {
            int u, v;
            cin>>u>>v;
            obj.addEdge(u, v);
        }
        obj.printAdjList();
    }
    return 0;
}