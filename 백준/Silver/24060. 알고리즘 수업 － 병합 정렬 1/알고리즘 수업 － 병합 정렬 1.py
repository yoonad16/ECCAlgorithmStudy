def merge_sort(A, p, r):
    if p < r:
        q = (p + r) // 2  
        merge_sort(A, p, q)  
        merge_sort(A, q + 1, r)  
        merge(A, p, q, r)  

def merge(A, p, q, r):
    temp = [0] * (r - p + 1)
    
    i = p  
    j = q + 1  
    t = 0

    while i <= q and j <= r:
        if A[i] <= A[j]:
            temp[t] = A[i]
            i += 1
        else:
            temp[t] = A[j]
            j += 1
        t += 1

    while i <= q:
        temp[t] = A[i]
        i += 1
        t += 1

    while j <= r:
        temp[t] = A[j]
        j += 1
        t += 1

    i = p
    for t in range(len(temp)):
        A[i] = temp[t]
        ans.append(A[i])
        i += 1

n, change = map(int, input().split())
A = list(map(int, input().split()))
ans=[]
merge_sort(A, 0, len(A) - 1)

if len(ans) < change:
    print(-1)
else:
    print(ans[change-1])