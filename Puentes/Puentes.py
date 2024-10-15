#Problem dmoj.uclv.edu.cu/problem/bridges
#User Hd(Derek Naharai Herrera Domínguez)

def count_bridges(graph):
    n = len(graph)
    visited = [False] * n
    parent = [-1] * n
    low = [float('inf')] * n
    disc = [float('inf')] * n
    bridges = 0

    def dfs(u, time):
        nonlocal bridges
        visited[u] = True
        disc[u] = time
        low[u] = time

        for v in graph[u]:
            if not visited[v]:
                parent[v] = u
                dfs(v, time + 1)
                low[u] = min(low[u], low[v])
                if low[v] > disc[u]:
                    bridges += 1
            elif v != parent[u]:
                low[u] = min(low[u], disc[v])

    for i in range(n):
        if not visited[i]:
            dfs(i, 0)

    return bridges

if __name__ == "__main__":
    N, M = map(int, input().split())
    graph = [[] for _ in range(N)]
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)
    
    ans = count_bridges(graph)
    print(ans)
