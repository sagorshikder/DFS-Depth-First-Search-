#include <bits/stdc++.h>
using namespace std;

void DFSUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFSUtil(neighbor, adj, visited);
        }
    }
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);

    // undirected graph edges
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {1, 2, 5};
    adj[5] = {3, 4};

    vector<bool> visited(n, false);
    cout << "DFS starting from node 0: ";
    DFSUtil(0, adj, visited);

    return 0;
}
