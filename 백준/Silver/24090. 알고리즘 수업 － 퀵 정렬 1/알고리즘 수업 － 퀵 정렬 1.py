import sys
sys.setrecursionlimit(int(2e4))

def quick_sort(A, p, r):
  if p < r:
    q = partition(A, p, r)
    quick_sort(A, p, q-1)
    quick_sort(A, q+1, r)

def partition(A, p, r):
  global count
  x = A[r]
  i = p-1
  for j in range(p, r):
    if A[j] <= x:
      i += 1
      count += 1
      if count == k :
        print(min(A[i], A[j]), max(A[i], A[j]))
      A[i], A[j] = A[j], A[i]

  if (i+1 != r) :
    count += 1
    if count == k :
        print(min(A[i + 1], A[r]), max(A[i + 1], A[r]))
    A[i+1], A[r] = A[r], A[i+1]
      
  return i+1


n, k = map(int, input().split())
A = list(map(int, input().split()))
count = 0

quick_sort(A, 0, n-1)

if count< k:
  print(-1)