#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
#define Hd main(void)


vector<int> dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
    int n = graph.size();
    vector<int> dist(n, numeric_limits<int>::max());
    dist[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) {
            continue;
        }

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

Hd
{
    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);
    vector<vector<pair<int, int>>> graph_forward(n);

    k--;

    for (int i = 0; i < m; i++) {
        int a, b, t;
        scanf("%d%d%d",&a,&b,&t);
        graph_forward[a - 1].push_back({b - 1, t});
    }

    vector<int> disx = dijkstra(graph_forward, k);
    int max_time = 0;

    for (int i = 0; i < disx.size(); i++) {
        if (i != k) {
            vector<int> D = dijkstra(graph_forward, i);
            int p1 = D[k] + disx[i];
            if (p1 > max_time) {
                max_time = p1;
            }
        }
    }
    printf("%d",max_time);
}