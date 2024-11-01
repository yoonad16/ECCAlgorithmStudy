n=int(input())
goal = []
stack = []
op = []
current = 1
for i in range(n):
  x=int(input())
  goal.append(x)

for N in goal:
  while current<=N :
    stack.append(current)
    op.append("+")
    current+=1
  if stack[-1]==N : 
    stack.pop()
    op.append("-")
  else : 
    op.append("NO")
    break
  
if op[-1]=="NO":
  print("NO")
else:
  for i in op:
    print(i)
