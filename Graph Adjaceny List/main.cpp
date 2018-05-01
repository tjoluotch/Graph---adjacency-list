//
//  main.cpp
//  Graph Adjaceny List
//
//  Created by TJ Oluotch on 01/05/2018.
//  Copyright © 2018 TJ Oluotch. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

//add an edge in an undirected graph
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// print the adjacency list representation of the graph
void printGraph(vector<int> adj[], int all_verticies){
    for (int vertex = 0; vertex < all_verticies; ++vertex) {
        cout << "\n Adjacecny list of vertex " << vertex << "\n head ";
        for(auto x : adj[vertex]){
            cout << "-> " << x;
        }
        printf("\n");
    }
}

int main() {
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    printGraph(adj, V);
    return 0;
}
