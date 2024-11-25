n, m = map(int, input().split())
cards = list(map(int, input().split()))

def blackjack(cards, n, m):
  ans = 0
  combinations = []

  for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                combinations.append((cards[i], cards[j], cards[k]))

  for comb in combinations :
    sum = comb[0] + comb[1] + comb[2]
    if sum <= m :
      ans = max(ans, sum)

  return ans

print(blackjack(cards, n, m))