def knapSack_dp(W, wt, val, n):
    A = [[0 for x in range(W+1)] for x in range(n+1)]

    for i in range(1, n+1):
        for w in range(1, W+1):
            if wt[i-1] > w: 
                A[i][w] = A[i-1][w]
            else:
                valWithout = A[i-1][w]
                valWith = val[i-1] + A[i-1][w-wt[i-1]] #남은 용량으로 이전까지의 물건들로 만들 수 있는 최적의 가치
                A[i][w] = max(valWith, valWithout)

    return A[n][W]


n, w = map(int, input().split())
wtlist = []
vallist = []

for i in range(n):
    wt, val = map(int, input().split())
    wtlist.append(wt)
    vallist.append(val)

print(knapSack_dp(w, wtlist, vallist, n))