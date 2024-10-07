from collections import deque

N, K = map(int, input().split(' '))
josephus = deque(range(1,N+1))
print("<", end='')

while len(josephus) > 1:
    josephus.rotate(-(K-1))
    print(josephus.popleft(), end=', ')

print(josephus.pop(), end=">")