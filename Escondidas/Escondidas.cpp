#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define Hd main(void)


vector<vector<int>> adj;

void bfs(int start, vector<int>& distances) {
    queue<int> q;
    vector<bool> visited(adj.size() + 1, false);

    q.push(start);
    visited[start] = true;
    distances[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
                distances[neighbor] = distances[node] + 1;
            }
        }
    }
}

Hd
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> distances(n + 1, 0);

    bfs(1, distances);

    long long mindis = 0, cont = 0, nod = 0;
    for (int i = 2; i <= n; i++) {
        if (distances[i] == mindis) {
            cont++;
        } else if (distances[i] > mindis) {
            mindis = distances[i];
            nod = i;
            cont = 1;
        }
    }
    cout << nod << " " << mindis << " " << cont << "\n";
}