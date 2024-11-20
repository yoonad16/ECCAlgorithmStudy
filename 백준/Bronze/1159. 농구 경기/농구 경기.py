from collections import Counter

n = int(input())
first_chars = []

for i in range(n):
    string = input()
    first_chars.append(string[0])

count_dict = {}

for char in first_chars:
    if char in count_dict:
        count_dict[char] += 1
    else:
        count_dict[char] = 1

ans = []
for char, count in count_dict.items():
    if count >= 5:
        ans.append(char)

if ans:
    print(''.join(sorted(ans)))
else:
    print('PREDAJA')
