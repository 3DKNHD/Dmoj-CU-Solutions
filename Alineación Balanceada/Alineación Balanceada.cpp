#include <bits/stdc++.h>
#define Hd main(void)
using namespace std;

int n;
vector<pair<long long, long long>> Tree;

void init(const vector<long long> &a, int node, int start, int end) {
    if (start == end) {
        Tree[node] = make_pair(a[start], a[start]);
    } else {
        int mid = (start + end) / 2;
        init(a, 2 * node, start, mid);
        init(a, 2 * node + 1, mid + 1, end);
        Tree[node].first = max(Tree[2 * node].first, Tree[2 * node + 1].first);
        Tree[node].second = min(Tree[2 * node].second, Tree[2 * node + 1].second);
    }
}

pair<long long, long long> query(int x, int y, int node, int start, int end) {
    if (y < start || x > end) {
        return make_pair(LLONG_MIN, LLONG_MAX);
    }
    if (x <= start && end <= y) {
        return Tree[node];
    }
    int mid = (start + end) / 2;
    auto left = query(x, y, 2 * node, start, mid);
    auto right = query(x, y, 2 * node + 1, mid + 1, end);
    return {max(left.first, right.first), min(left.second, right.second)};
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int cp;
    cin >> n >> cp;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Tree.resize(4 * n);
    init(a, 1, 0, n - 1);
    while (cp--) {
        int m, mz;
        cin >> m >> mz;
        m--;
        mz--;
        auto result = query(m, mz, 1, 0, n - 1);
        cout << result.first - result.second << "\n";
    }
}