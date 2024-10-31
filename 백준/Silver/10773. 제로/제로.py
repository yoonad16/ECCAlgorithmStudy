size = int(input())
stack = []
for i in range(size):
    x=int(input())
    if x != 0:
        stack.append(x)
    elif x == 0:
        stack.pop()

sum =0
for i in stack:
    sum+=i
print(sum)