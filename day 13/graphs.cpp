#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    
    public: 
        unordered_map<int, list <int>> adj;

        void addEdge(int u, int v, bool direction){
        // 0 -> undirected graph
        // 1 -> directed graph

        // create edge from u to v
        adj[u].push_back(v);
        
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
        void printAdjlist(){
            for(auto i : adj){
                cout << i.first << " -> ";
                for(auto j : i.second){
                cout << j << " , ";
            }
        }
    }
};

int main()
{
   int n;
   cout << "Enter the number of nodes : " << endl;
   cin >> n;

   int m;
   cout << "Enter the number of edges : " << endl;
   cin >> m;

   graph g;

   for(int i = 0; i < m; i++){
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v, 0); // undirected graph
   }

   g.printAdjlist();
   return 0;
}