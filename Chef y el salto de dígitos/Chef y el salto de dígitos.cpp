#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

#define Hd main(void)

int mJumpsBFS(vector<int>& digits) {
    unordered_map<int, vector<int>> graph;
    int n = digits.size();

    for (int i = 0; i < n; i++) {
        graph[digits[i]].push_back(i);
        if (i < n - 1) {
            graph[i].push_back(i + 1);
            graph[i + 1].push_back(i);
        }
        for (int j = 0; j < n; j++) {
            if (digits[i] == digits[j] && i != j) {
                graph[i].push_back(j);
            }
        }
    }

    vector<int> distance(n, -1);
    queue<int> q;

    q.push(0);
    distance[0] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int next : graph[curr]) {
            if (distance[next] == -1) {
                distance[next] = distance[curr] + 1;
                q.push(next);
            }
        }
    }

    return distance[n - 1];
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin>>a;
    vector<int> ar(0);
    for(int i=0; i<a.size(); i++) {
        ar.push_back(a[i]-0);
    }
    int jumps = mJumpsBFS(ar);
    cout << jumps << "\n";
}