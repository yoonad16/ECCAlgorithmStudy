from collections import deque

n, k = map(int, input().split())
queue = deque(range(1, n + 1))

while len(queue) > k:
    queue.rotate(-1)
    for _ in range(k - 1):
        queue.popleft()

print(queue[0])