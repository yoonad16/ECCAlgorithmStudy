n=int(input())
A = sorted(list(map(int, input().split())))
m=int(input())
B = list(map(int, input().split()))

def binary_searchj_iter(A, key, low, high):
  while low <= high:
    mid = (low + high) // 2
    if key == A[mid]:
      return 1
    elif key < A[mid]:
      high = mid - 1
    else:
      low = mid + 1
  return 0

for i in range(m):
  print(binary_searchj_iter(A, B[i], 0, n-1))