// TCS codevita problem - (Critical Planets) :

#include<vector>
#include<iostream>
using namespace std;

class undirectedGraph{
    int no_of_nodes;
    vector<vector<int>> adjList;
    public:
        undirectedGraph(int nodes){
            no_of_nodes = nodes;
            adjList = vector<vector<int>>(nodes);
        }
        void addEdge(int n1, int n2){
            adjList[n1].push_back(n2);
            // printf("--------- 1st");
            adjList[n2].push_back(n1);
            // printf("--------- 2nd");
        }
        int count_critical_planets(){
            int count = 0;
            for(int i=0;i<no_of_nodes;i++){
                if(adjList[i].size() == 1)
                    count++;
            }
            return count;
        }
};

int main(){
    int m, n;
    cin>>m>>n;
    undirectedGraph obj(n);
    for(int i=0;i<m;i++){
        int n1, n2;
        cin>>n1, n2;
        obj.addEdge(n1, n2);
    }
    cout<<obj.count_critical_planets();
    return 0;
}