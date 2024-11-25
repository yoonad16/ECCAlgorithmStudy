n = int(input())
arr = []
time = 0

for i in range(n):
  dep, exa = map(int, input().split())
  list = [dep, exa]
  arr.append(list)

arr = sorted(arr, key=lambda x: x[0])

for i in range(n):
  if time <= arr[i][0] :
    time = arr[i][0]
    time += arr[i][1]
  else :
    time += arr[i][1]

print(time)