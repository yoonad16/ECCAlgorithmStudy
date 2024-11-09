def bubble_sort(A):
  N = len(A)
  count = 0
  for last in range(N, 1, -1):
    for i in range(0, last - 1):
      if A[i] > A[i+1]:
        A[i], A[i+1] = A[i+1], A[i]
        count += 1
        if count == change:
          print(" ".join(map(str, A)))
          return
  print(-1)

n, change = map(int, input().split())
A = list(map(int, input().split()))
bubble_sort(A)
