n=int(input())
strings=[]
for i in range(n):
  word=input()
  strings.append(word)

strings=list(set(strings))
sorted_strings = sorted(strings, key=lambda s:(len(s),s))
for word in sorted_strings:
  print(word)