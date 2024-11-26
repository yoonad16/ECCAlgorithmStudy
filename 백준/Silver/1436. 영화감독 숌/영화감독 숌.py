id = int(input())
count = 0
i = 0

while True:
  if '666' in str(i):
    count += 1
  if count == id:
    print(i)
    break
  i += 1