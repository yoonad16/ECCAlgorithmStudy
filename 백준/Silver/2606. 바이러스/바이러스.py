n = int(input())
pair = int(input())
adj = [[0 for _ in range(n)] for _ in range(n)]

vtx = []
for i in range(n):
    vtx.append(i + 1)

for _ in range(pair):
    u, v = map(int, input().split())
    adj[u - 1][v - 1] = adj[v - 1][u - 1] = 1

visited = [False] * n

def DFS(vtx, adj, s, visited):
    visited[s] = True
    for v in range(len(vtx)):
        if adj[s][v] == 1 and not visited[v]:
            DFS(vtx, adj, v, visited)

DFS(vtx, adj, 0, visited)

count = sum(visited)  # True의 개수 세기
print(count-1)