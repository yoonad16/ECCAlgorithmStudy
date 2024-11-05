n=int(input())
arr=[]
for i in range(n):
  x,y=map(int,input().split())
  arr.append([x,y])

sorted_arr = sorted(arr, key=lambda point: (point[1], point[0]))
for i in range(n):
  print(*sorted_arr[i])