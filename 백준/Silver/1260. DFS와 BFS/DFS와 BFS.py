from collections import deque

def DFS(vtx, adj, s, visited):
  print(vtx[s], end=' ')
  visited[s] = True
  for v in range(len(vtx)):
    if adj[s][v] == 1 and not visited[v]:
      DFS(vtx, adj, v, visited)
  
def initialization() :
  return [False] * n

def BFS(vtx, adj, s, visited):
  q = deque()
  q.append(s)
  visited[s] = True
  while q:
    v = q.popleft()
    print(vtx[v], end=' ')
    
    for i in range(n):
      if adj[v][i] == 1 and not visited[i]:
        q.append(i)
        visited[i] = True

n, m, v = map(int, input().split())

vtx = []
visited = initialization()

for i in range(n):
  vtx.append(i+1)

adj = [[0] * n for _ in range(n)]
for i in range(m):
  a, b = map(int, input().split())
  adj[a - 1][b - 1] = 1
  adj[b - 1][a - 1] = 1


DFS(vtx, adj, v-1, visited)
visited = initialization()
print()

BFS(vtx, adj, v-1, visited)