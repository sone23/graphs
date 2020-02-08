#include <bits/stdc++.h> 
using namespace std; 
  
class Graph { 
  
    // Number of vertex 
    int v; 
  
    // Adjacency matrix 
    int** adj; 
  
public: 
    // To create the initial adjacency matrix 
    Graph(int v, int e); 
  
    // Function to insert a new edge 
    void addEdge(int start, int e); 
  
}; 
Graph::Graph(int v) 
{ 
    this->v = v; 
    adj = new int*[v]; 
    for (int row = 0; row < v; row++) { 
        adj[row] = new int[v]; 
        for (int column = 0; column < v; column++) { 
            adj[row][column] = 0; 
        } 
    } 
} 
  
// Function to add an edge to the graph 
void Graph::addEdge(int start, int e) 
{ 
  
    // Considering a bidirectional edge 
    adj[start][e] = 1; 
    adj[e][start] = 1; 
} 

int main(int argc, char **argv) 
{ 
    // std::string arg(argv[1]);
    // std::stringstream ss(arg);
    // int N;
    // ss >> N; 
  
    // Create the graph 
    Graph G(N); 
    G.addEdge(0, 1); 
    G.addEdge(0, 2); 
    G.addEdge(0, 3); 
    G.addEdge(0, 4); 
} 