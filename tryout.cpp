#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    // Adjacency matrix input
    vector<vector<int>> adjMat(n, vector<int>(n));

    cout << "\nEnter adjacency matrix (undirected graph):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adjMat[i][j];
        }
    }

    // Count vertices
    cout << "\nNumber of vertices: " << n << endl;

    // Count edges (each edge counted twice in matrix)
    int edgeCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (adjMat[i][j] == 1) edgeCount++;
        }
    }
    cout << "Number of edges: " << edgeCount << endl;

    // Adjacency List
    vector<vector<int>> adjList(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adjMat[i][j] == 1) {
                adjList[i].push_back(j);
            }
        }
    }

    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int nbr : adjList[i]) {
            cout << nbr << " ";
        }
        cout << endl;
    }

    // Spanning Tree using BFS
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);
    queue<int> q;

    int start = 0;   // start BFS from vertex 0
    visited[start] = true;
    q.push(start);

    cout << "\nSpanning Tree Edges:\n";
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int nbr : adjList[node]) {
            if (!visited[nbr]) {
                visited[nbr] = true;
                parent[nbr] = node;
                q.push(nbr);

                cout << node << " - " << nbr << endl;
            }
        }
    }

    return 0;
}
