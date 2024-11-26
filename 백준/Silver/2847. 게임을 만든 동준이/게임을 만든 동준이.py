n = int(input())
lst = []
count = 0

for i in range(n):
  a = int(input())
  lst.append(a)

while True:
  changes_made = False
  for i in range(len(lst)-1):
    current_value = lst[i]
    next_value = lst[i+1]

    if current_value >= next_value:
      lst[i] -= 1
      count += 1
      changes_made = True
    
  if not changes_made:
    break

print(count)